#include "IComponent.h"

IComponent::IComponent(){}

IComponent::IComponent(int width, int hight, BorderType border) : Control(hight, width,0, 0, border), visibility(true){}

IComponent::~IComponent(){}

void IComponent::setBorder(BorderType border){borderStyle = border;}
void IComponent::setvisibility(bool visibility) { visibility = visibility; }
void IComponent::setBackgroundColor(Color color) { background = color; }
void IComponent::setForeground(Color color) { foreground = color; }
int IComponent::getHight(){return hight;}
int IComponent::getWidth() { return width; }
void IComponent::printBorder(Graphics& g)
{
	char leftTop, topAndBottom, leftAndRight, leftBottom, rightTop, rightBottom;
	//set cursor position example
	switch (borderStyle)
	{
	case BorderType::DoubleLineBorder: {
		leftTop = '\xC9';
		topAndBottom = '\xCD';
		leftAndRight = '\xBA';
		leftBottom = '\xC8';
		rightTop = '\xBB';
		rightBottom = '\xBC';
		break;
	}
	case BorderType::SingleBorder : {
		leftTop = '\xDA';
		topAndBottom = '\xC4';
		leftAndRight = '\xB3';
		leftBottom = '\xC0';
		rightTop = '\xBF';
		rightBottom = '\xD9';
		break;
	}
	case BorderType::NoneType:
		break;
	default:
		cout << "No BorderType" << endl;
	}
	if(borderStyle!=BorderType::NoneType){
		g.moveTo(this->getLeft(), this->getTop());
		printf("%c", leftTop);
		for (short i = 0; i < width; i++) 
			printf("%c", topAndBottom);
		printf("%c", rightTop);
		for (short i = 1; i < hight; i++) {
			g.moveTo(this->getLeft(), (this->getTop() + i));
			printf("%c", leftAndRight);
			g.moveTo(this->getLeft() + width + 1, (this->getTop() + i));
			printf("%c", leftAndRight);
		}
		g.moveTo(this->getLeft(), (this->getTop() + hight));
		printf("%c", leftBottom);
		g.moveTo(this->getLeft() + 1, this->getTop() + hight);
		for (short i = 1; i < width + 1; i++) 
			printf("%c", topAndBottom);
		printf("%c", rightBottom);
	}
}
