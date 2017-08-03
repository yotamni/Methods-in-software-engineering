#include "NumericBox.h"
#include <iostream>
#include <ctime>

void NumericBox::draw(Graphics& g)
{
	setBackgroundColor(Color::Red);
	printBorder(g);
	up.setTop(this->getTop() + 1);
	up.setLeft(this->getLeft() + 1);
	up.setBorder(BorderType::SingleBorder);
	up.draw(g);
	down.setTop(this->getTop() + 1);
	down.setLeft(this->getLeft() + 4);
	down.setBorder(BorderType::SingleBorder);
	down.draw(g);
	text.setTop(this->getTop() + 1);
	text.setLeft(this->getLeft() + 10);
	text.setForeground(Color::Orange);
	text.draw(g);
}
NumericBox::NumericBox(int width = 20, int hight = 2, int top = 0, int left = 0, int _min = 0, int _max = 100, int val = 0) : IComposite(hight, width, top, left, BorderType::SingleBorder), up(1, 2), down(1, 2), text(5, 1), _min(_min), _max(_max)
{
	std::string stringVal = std::to_string(val);
	up.SetText("+");
	down.SetText("-");
	up.setTop(top + 1);
	down.setTop(top + 1);
	up.setLeft(left + 1);
	down.setLeft(left + 6);
	up.addListener(*this);
	down.addListener(*this);
	text.setLeft(left + left + 7);
	text.SetText(stringVal);
}
void NumericBox::addCompon(Control * toAdd, short top, short left)
{
	IComposite::addCompon(toAdd, top, left); //avoid from adding more components to numericBox
}
void NumericBox::keyDown(int keycode, char character)
{
}
void NumericBox::increaseText()
{
	int val = std::stoi(text.GetText());
	val++;
	text.SetText(std::to_string(val));
}
void NumericBox::decreaseText()
{
	int val = std::stoi(text.GetText());
	val--;
	text.SetText(std::to_string(val));
}
void NumericBox::MousePressed(Control & control, int x, int y, bool isLeft)
{
	if (control.getLeft() == up.getLeft() && control.getTop() == up.getTop())	//if up
		increaseText();
	else if (control.getLeft() == down.getLeft() && control.getTop() == down.getTop())	//if down
		decreaseText();
	else
		text.SetText("0");
}

void NumericBox::mousePressed(int x, int y, bool isLeft)
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