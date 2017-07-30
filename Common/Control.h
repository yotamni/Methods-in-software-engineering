#pragma once
#include "Graphics.h"
#include <vector>
#include <string.h>
#include <iostream>
using namespace std;

enum class BorderType{SingleBorder, DoubleLineBorder, NoneType};

class Control
{
protected:
	short left;
	short top;
	bool focus;
	BorderType borderStyle;
public:
	Control(int width) { width = width; std::cout << width; };
	Control(short top, short left, BorderType border);
	Control();
	static Control* getFocus() { return NULL; };
	static void setFocus(Control& control) {};

	virtual void draw(Graphics& g, int x, int y, size_t z) {};
//	virtual void draw(Graphics & g, int start_x, int start_y);
	virtual void draw(Graphics&) {};
	virtual void mousePressed(int x, int y, bool isLeft) {};
	virtual void keyDown(int keyCode, char charecter) {};
	virtual short getLeft() { return left; };
	virtual short getTop() { return top; };
	virtual void setLeft(short);
	virtual void setTop(short);
	virtual void getAllControls(vector<Control*>* controls) {};
	virtual bool canGetFocus() { return FALSE; };
	~Control();
};

