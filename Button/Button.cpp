#include "Button.h"

Button::Button(int width, int hight):Label(width,hight){}
Button::~Button(){}

void Button::addListener(MouseListener& listener)
{
	this->listener = &listener;
}

