#include "NumericBox.h"
#include <iostream>
#include <ctime>

void NumericBox::draw(Graphics& g)
{
	printBorder(g);
	g.moveTo(this->getTop() + 1, this->getLeft() + 1);
//	cout << value;

}
NumericBox::NumericBox(int width=20, int hight=2, int top=0, int left=0, int _min=0, int _max=100, int val=0): IComposite(hight, width, top, left, BorderType::SingleBorder), up(5,5), down(5,5), text(5,5), _min(_min), _max(_max)
{
	std::string stringVal = std::to_string(val);
	up.SetText("+");
	down.SetText("-");
	up.setTop(top + 1);
	down.setTop(top + 1);
	up.setLeft(left + 1);
	down.setLeft(left + 6);
	text.setLeft(left+left+7);
	text.SetText(stringVal);
}
void NumericBox::keyDown(int keycode, char character)
{
}
void NumericBox::MousePressed(Control & control, int x, int y, bool isLeft)
{
}
void NumericBox::mousePressed(const int x, const int y, const bool isLeft)
{
}
//
//NumericBox::NumericBox(int _width, int _min, int _max) :IComponent(_width, 2, BorderType::DoubleLineBorder) {
//	NumericBox::setWidth(width);
//	NumericBox::setMin(_min);
//	NumericBox::setMax(_max);
//	NumericBox::setValue(0);
//}
//
//void NumericBox::mousePressed(int x, int y, bool isLeft) {
//	
//}
//
//void NumericBox::keyDown(int keyCode, char charecter) {
//	cout << this->getValue();
//		switch (keyCode) {
//			case VK_RIGHT: { 
//				if (this->value < this->max)
//					this->add();
//				break; 
//			}
//			case VK_LEFT: { 
//				if (this->value > this->min)
//					this->reduce();
//				break; 
//			}
//		}
//}