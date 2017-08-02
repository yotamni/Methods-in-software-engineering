#include "Panel.h"



//Panel::Panel()
//{
//	
//}
Panel::Panel(int width, int hight)
{
	this->width = width;
	this->hight = hight;
	borderStyle = BorderType::DoubleLineBorder;
}

Panel::~Panel()
{
}

void Panel::draw(Graphics& g)
{
	printBorder(g);
	drawAll(g);
}
void Panel::keyDown(int keyCode, char charecter) {

}
void Panel::addCompon(Control* toAdd, short top, short left) {
	toAdd->setTop(top);
	toAdd->setLeft(left);
	container.push_back(toAdd);
	if (toAdd->getHight() > this->getHight())
		this->setHight((this->getHight() + toAdd->getHight() + 1));
	if (toAdd->getWidth() > this->getWidth())
		this->setWidth((this->getWidth() + toAdd->getWidth() + 1));
}
void Panel::getAllControls(vector<Control*>* controls) {
	for (auto it = container.begin(); it != container.end(); ++it) {
		(*it)->getAllControls(controls);
	}
}
void Panel::mousePressed(const int x, const int y, const bool isLeft) {
	if (isLeft) {
		for (auto children = container.begin(); children != this->container.end(); ++children) {
			int Y = y - (*children)->getTop();
			int X = x - (*children)->getLeft();
			if (X >= 0 && Y >= 0 && X < (*children)->getWidth() && Y < (*children)->getHight()) 
			{
				if ((*children)->canGetFocus()) setFocus(**children);
				(*children)->mousePressed(X, Y, isLeft);
				break;
			}
		}
	}
}
