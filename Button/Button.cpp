#include "Button.h"

Button::Button(int width, int hight):Label(width,hight), clickable(true){}
Button::~Button(){}

void Button::addListener(MouseListener& listener)
{
	this->listener = &listener;
}

void Button::mousePressed(int x, int y, bool isLeft)
{
	if (y < getTop() + getHight() && x < getLeft() + getWidth() && x > getLeft() && y > getTop() && clickable)
		listener->MousePressed(*this, x, y, isLeft);
}

void Button::keyDown(int keyCode, char charecter)
{
}

