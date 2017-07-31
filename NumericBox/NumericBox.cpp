#include "NumericBox.h"
#include <iostream>
#include <ctime>

void NumericBox::draw(Graphics& g)
{
	printBorder(g);
	g.moveTo(this->getTop() + 1, this->getLeft() + 1);
	cout << value;

}

void NumericBox::setBorder(BorderType border) {

}


NumericBox::NumericBox(int _width, int _min, int _max) :IComponent(_width, 2, BorderType::DoubleLineBorder) {
	NumericBox::setWidth(width);
	NumericBox::setMin(_min);
	NumericBox::setMax(_max);
	NumericBox::setValue(0);
}

void NumericBox::mousePressed(int x, int y, bool isLeft) {
	
}

void NumericBox::keyDown(int keyCode, char charecter) {
	cout << this->getValue();
		switch (keyCode) {
			case VK_RIGHT: { 
				if (this->value < this->max)
					this->add();
				break; 
			}
			case VK_LEFT: { 
				if (this->value > this->min)
					this->reduce();
				break; 
			}
		}
}