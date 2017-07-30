#include "Control.h"



Control::Control():top(0),left(0)
{
	cout << "C'tor Control" << endl;
}
Control::Control(short top, short left, BorderType border) : top(top), left(left), borderStyle(border)
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
