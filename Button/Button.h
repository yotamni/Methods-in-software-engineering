#pragma once
#include "../Label/Label.h"
struct MouseListener
{
	virtual void MousePressed(Control &control, int x, int y, bool isLeft) = 0;
};
class Button :public Label
{
	MouseListener* listener;
public:
	Button(int, int);
	~Button();
	void addListener(MouseListener &listener);
};

