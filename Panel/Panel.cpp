#include "Panel.h"



Panel::Panel()
{
}


Panel::~Panel()
{
}

void Panel::draw(Graphics& g)
{
	drawAll(g);
}
void Panel::keyDown(int keyCode, char charecter) {

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
