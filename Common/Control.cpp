#include "Control.h"

Control* Control::onFocus;

Control::Control():top(0),left(0), width(1),hight(1),canFocus(true), borderStyle(BorderType::NoneType)
{
	cout << "C'tor Control" << endl;
}
Control::Control(short top, short left, BorderType border) : top(top), left(left), borderStyle(border), width(1), hight(1), canFocus(true)
{
	cout << "C'tor Control" << endl;
}
Control::Control(int hight, int width, short top, short left, BorderType border) : top(top), width(width), hight(hight), left(left), borderStyle(border), canFocus(true)
{ 
	cout << "C'tor Control" << endl; 
}
Control::~Control()
{
}
void Control::getAllControls(vector<Control*>* controls) {
	if (canGetFocus())
		controls->push_back(this);
}
void Control::setFocus(Control & control) {onFocus = &control;}
int Control::getHight() { return hight; }
void Control::setLeft(short newLeft){this->left = newLeft;}
void Control::setTop(short newTop){this->top = newTop;}
void Control::setHight(int newHight) {this->hight = newHight;}
int Control::getWidth() { return width; }
void Control::setWidth(int width) {this->width = width;}

