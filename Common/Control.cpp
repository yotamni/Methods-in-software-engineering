#include "Control.h"

Control* Control::onFocus;

Control::Control():top(0),left(0), width(0)
{
	cout << "C'tor Control" << endl;
}
void Control::setFocus(Control & control)
{
	
	onFocus = &control; 

}
Control::Control(short top, short left, BorderType border) : top(top), left(left), borderStyle(border)
{
	cout << "C'tor Control" << endl;
}
Control::Control(int hight,int width, short top, short left, BorderType border) : top(top),width(width),hight(hight), left(left), borderStyle(border)
{
	cout << "C'tor Control" << endl;
}

void Control::setLeft(short newLeft)
{
	this->left = newLeft;
}

void Control::setTop(short newTop)
{
	this->top = newTop;
}

Control::~Control()
{
}
