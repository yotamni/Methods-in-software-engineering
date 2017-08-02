#include "Button.h"

Button::Button(int width, int hight):Label(width,hight){}
Button::~Button(){}

void Button::addListener(MouseListener& listener)
{
	this->listener = &listener;
}

//void Button::draw(Graphics &)
//{
//}
//
//void Button::mousePressed(const int x, const int y, const bool isLeft)
//{
//}
//
//void Button::keyDown(int keyCode, char charecter)
//{
//}

