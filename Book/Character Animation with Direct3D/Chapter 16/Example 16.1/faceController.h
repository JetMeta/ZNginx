﻿//////////////////////////////////////////////////////////////////////////
//					Character Animation with Direct3D					//
//						   Author: C. Granberg							//
//							   2008 - 2009								//
//////////////////////////////////////////////////////////////////////////

#ifndef _FACECONTROLLER_
#define _FACECONTROLLER_

#include <d3dx9.h>
#include <vector>
#include "face.h"

using namespace std;

class FaceController
{
    friend class Face;
public:
    FaceController(D3DXVECTOR3 pos, Face *pFace);
    void Update(float deltaTime);
    void Render();
    void RenderEyes();

public:
    Face *m_pFace;

    int m_emotionIndex;
    int m_speechIndices[2];

    float m_blinkTime;
    float m_emotionTime, m_emotionBlend;

    D3DXVECTOR4 m_morphWeights;
    D3DXMATRIX m_headMatrix;

    Eye m_eyes[2];
};

#endif
