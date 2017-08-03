#include "Label.h"
#include <iostream>

Label::Label(int width, int hight):TextBox(width, hight, BorderType::NoneType) {
	this->canFocus = false;
};

void Label::SetText(string value) {
	this->value = value;
}

void Label::draw(Graphics& g) {
	printBorder(g);
	g.moveTo(this->getTop() + 1, this->getLeft() + 1);
	g.setCursorVisibility(false);
	g.write(this->getLeft()+1, this->getTop()+1, this->GetText());
}

string Label::GetText() {
	return value;
}