#include "TextBox.h"
#include <iostream>
#include <ctime>

TextBox::TextBox(int width, int hight, BorderType border):IComponent(width,hight,border) {
	cout << "C'tor TextBox" << endl;
};

void TextBox::SetText(string value) {
	value = value;
	Graphics g = Graphics();
	g.write(value);
}
void TextBox::setBackgroundColor(Color color) {
	Graphics g = Graphics();
	g.setBackground(color);
	
}

void TextBox::draw(Graphics& g, int start_x, int start_y, size_t z) {

}

void TextBox::draw(Graphics& g)
{
	printBorder(g);
	g.moveTo(this->getTop() + 1,this->getLeft()+1 );
	printf("%s", "test");
}

void TextBox::setvisibility(bool visibility) {

}
void TextBox::setForeground(Color color) {

}

void TextBox::setBorder(BorderType border) {

}
