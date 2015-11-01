//SKImageDisplayer
//Display a image.
//Author:ShadowK
//email:zhu.shadowk@gmail.com
//2015.11.1
//Use Ctrl+M,Ctrl+O to fold the code.

#pragma once

#include <iostream>
#include <stdio.h>
#include <cv.h>
#include <highgui.h>
#include "SKDefinition.h"
using namespace std;


class SKImageDisplayer
{
public:
#ifdef RESIZE_PIC
	const static int resize_height = 500;
	const static int resize_width = 500;
#endif
	SKImageDisplayer();
	~SKImageDisplayer();
	void display(IplImage **p);
	void display(IplImage **p, const char *name);
	void hide();
private:
	class SKImageDisplayerImpl *_impl;
};