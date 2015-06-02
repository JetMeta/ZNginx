﻿// Done by TheTutor

/*
	This tutorial is going to clear up the mystery of how to "include a .dll
	file".  You'll see another project with this tutorial named "PrintDLL".  This project
	was used to create "PrintDLL.dll" and "PrintDLL.lib".  We also take from that
	project "print.h" and slightly modify it in this project (see header file).

	What we are doing in this program is including a function whose implementation is
	contained in a .dll file and calling it.
*/

#include "print.h"

// Here we're including "PrintDLL.lib".  We MUST include this .lib file to be able
// to use "PrintDLL.dll".  This file was generated by the "PrintDLL" project.
#pragma comment(lib,"PrintDLL.lib")

// Call the function and call it a day
int main()
{
    printMessage();
    return 0;
}

// To DLL or not to DLL that is the question...
//
// DLL's are typically used to share common functionality amongst
// programs or used a a way to update a program after release it.
// This was helpful, when hard drive space was limited and Internet speeds
// were slower.  However, now days, with such large hard drives and broadband
// available, people are starting to use DLL's less.  Instead they are opting
// to release a new .exe if patching is needed.

/*-------------------------*\
|  Programmed by:  TheTutor |
|  ©2000-2006 GameTutorials |
\*-------------------------*/




