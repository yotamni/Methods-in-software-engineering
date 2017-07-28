#include "TextBox.h"
#include <iostream>


TextBox::TextBox(int width):Control(width) {
	//width = width;
};

void TextBox::SetText(string value) {
	value = value;
	Graphics g = Graphics();
	g.write(value);
}
void TextBox::setBackGround(Color color) {
	Graphics g = Graphics();
	g.setBackground(color);
	
}

void TextBox::draw(Graphics& g, int x, int y, size_t z) {
	cout << "drow in TExtBox";
}