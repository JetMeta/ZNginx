﻿#include <windows.h>
// Standard OpenGL header
#include <GL/gl.h>

#include "Gut.h"
#include "render_data.h"

static Matrix4x4 g_view_matrix;

bool InitResourceOpenGL(void)
{
	// 計算出一個可以轉換到鏡頭座標系的矩陣
	g_view_matrix = GutMatrixLookAtRH(g_eye, g_lookat, g_up);
	// 設定投影矩陣
	Matrix4x4 projection_matrix = GutMatrixOrthoRH_OpenGL(g_fOrthoWidth, g_fOrthoHeight, 0.1f, 100.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixf( (float *) &projection_matrix);

	// 把正向跟反向的面都畫出來
	glDisable(GL_CULL_FACE);

	return true;
}

bool ReleaseResourceOpenGL(void)
{
	// 沒事做
	return true;
}

// callback function. 視窗大小改變時會被呼叫, 并傳入新的視窗大小.
void ResizeWindowOpenGL(int width, int height)
{
	// 使用新的視窗大小做為新的繪圖解析度
	glViewport(0, 0, width, height);
	// 投影矩陣, 重設水平跟垂直方向的視角.
	float aspect = (float) height / (float) width;
	g_fOrthoWidth = g_fOrthoSize;
	g_fOrthoHeight = g_fOrthoSize;
	if ( aspect > 1.0f )
		g_fOrthoHeight *= aspect;
	else
		g_fOrthoWidth /= aspect;

	Matrix4x4 projection_matrix = GutMatrixOrthoRH_OpenGL(g_fOrthoWidth, g_fOrthoHeight, 0.1f, 100.0f);
	// 設定視角轉換矩陣
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixf( (float *) &projection_matrix);
}

static void SetupLighting(void)
{
	// 開啟打光功能
	glEnable(GL_LIGHTING);
	// `設定環境光`
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, (float *)&g_vAmbientLight);
	// `設定物件材質的反光能力`
	Vector4 vFullIntensity(1.0f, 1.0f, 1.0f, 1.0f);
	Vector4 vZeroIntensity(0.0f, 0.0f, 0.0f, 0.0f);
	glMaterialfv(GL_FRONT, GL_AMBIENT, (float *) &vFullIntensity);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, (float *) &vFullIntensity);
	glMaterialfv(GL_FRONT, GL_SPECULAR, (float *) &vFullIntensity);
	glMaterialfv(GL_FRONT, GL_EMISSION, (float *) &vZeroIntensity);
	glMaterialf (GL_FRONT, GL_SHININESS, g_fMaterialShininess);

	int i;
	for ( i=0; i<g_iNumActivatedLights; i++ )
	{
		int LightID = GL_LIGHT0 + i;

		glEnable(LightID);

		glLightfv(LightID, GL_POSITION, (float *) &g_ActivatedLights[i].m_Position);
		glLightfv(LightID, GL_DIFFUSE, (float *) &g_ActivatedLights[i].m_Diffuse);
		glLightfv(LightID, GL_SPECULAR, (float *) &g_ActivatedLights[i].m_Specular);

		glLightf(LightID, GL_CONSTANT_ATTENUATION,	1.0f);
		glLightf(LightID, GL_LINEAR_ATTENUATION,	0.0f);
		glLightf(LightID, GL_QUADRATIC_ATTENUATION, 0.0f);
	}

	for ( ; i<MAX_ACTIVATED_LIGHTS; i++ )
	{
		glDisable(GL_LIGHT0+i);
	}
}

// `使用OpenGL來繪圖`
void RenderFrameOpenGL(void)
{
	// `清除畫面`
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	// `用點來畫出光源位置`	
	glMatrixMode(GL_MODELVIEW);
	glLoadMatrixf( (float *) &g_view_matrix);
	// `暫時關閉打光功能`
	glDisable(GL_LIGHTING);
	// `設定畫點時使用5x5個像素來畫一個點`
	glPointSize(5.0f);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glDisableClientState(GL_NORMAL_ARRAY);
	glVertexPointer(3, GL_FLOAT, sizeof(Vertex_VCN), &g_LightPosition[0].m_Position);
	glColorPointer (4, GL_FLOAT, sizeof(Vertex_VCN), &g_LightPosition[0].m_Color);
	glDrawArrays(GL_POINTS, 0, NUM_LIGHTS);

	SetupLighting();

	glDisableClientState(GL_COLOR_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glVertexPointer(3, GL_FLOAT, sizeof(Vertex_VCN), &g_Quad[0].m_Position);
	glNormalPointer(GL_FLOAT, sizeof(Vertex_VCN), &g_Quad[0].m_Normal);
	// `計算出一個可以轉換到鏡頭座標系的矩陣`
	Matrix4x4 world_view_matrix = g_world_matrix * g_view_matrix;
	glLoadMatrixf( (float *) &world_view_matrix);
	// `畫一片矩形來看打光效果`
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);
	// `把背景backbuffer的畫面呈現出來`
	GutSwapBuffersOpenGL();
}
