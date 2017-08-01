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
	int hight;
	int width;
	short left;
	short top;
	bool canFocus;
	BorderType borderStyle;
	static Control* onFocus;
public:
	Control(int width) { width = width; std::cout << width; };
	Control(short top, short left, BorderType border);
	Control(int hight,int width,short top, short left, BorderType border);
	Control();
	static Control* getFocus() { return onFocus; };
	static void setFocus(Control& control);
	int getHight();
	void setHight(int);
	int getWidth();
	void setWidth(int);
	virtual void draw(Graphics& g, int x, int y, size_t z) {};
	virtual void draw(Graphics&) {};
	virtual void mousePressed(const int x, const int y, const bool isLeft)=0;
	virtual void keyDown(int keyCode, char charecter) =0;
	virtual short getLeft() { return left; };
	virtual short getTop() { return top; };
	virtual void setLeft(short);
	virtual void setTop(short);
	virtual void getAllControls(vector<Control*>* controls);
	virtual bool canGetFocus() { return canFocus; };
	~Control();
};

