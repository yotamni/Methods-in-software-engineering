#pragma once
#include "Graphics.h"
#include <vector>
#include <iostream>
using namespace std;

class Control
{
	int width;

protected:
	short left;
	short top;
	
public:
	Control(int width) { width = width; std::cout << width; };
	Control();
	static Control* getFocus() { return NULL; };
	static void setFocus(Control& control) {};
	
	

	void draw(Graphics& g, int x, int y, size_t z) {};
	virtual void mousePressed(int x, int y, bool isLeft) {};
	virtual void keyDown(int keyCode, char charecter) {};
	virtual short getLeft() { return 0; };
	virtual short getTop() { return 0; };
	virtual void getAllControls(vector<Control*>* controls) {};
	virtual bool canGetFocus() { return FALSE; };
	~Control();
};

