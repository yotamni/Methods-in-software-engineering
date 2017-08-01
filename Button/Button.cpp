#include "Button.h"


Button::Button(int width, int hight):Label(width,hight)
{
//	canFocus = true;
}
Button::~Button()
{

}
void Button::addListener(MouseListener& listener)
{
	this->listener = &listener;
}

