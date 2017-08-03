#pragma once
#include "../Label/Label.h"
//#include "../NumericBox/NumericBox.h"
struct MouseListener
{
	virtual void MousePressed(Control &control, int x, int y, bool isLeft) = 0;
};

class Button :public Label
{
	MouseListener* listener;
	bool clickable;
public:
	Button(int, int);
	~Button();
	void addListener(MouseListener &listener);
	void mousePressed(int x, int y, bool isLeft);
//	void MousePressed(Control &control, const int x, const int y, const bool isLeft)
	/*void draw(Graphics&);*/
	void keyDown(int keyCode, char charecter);
};

