#include "TextBox.h"
#include <iostream>


TextBox::TextBox(int width) {
	std::cout << "TextBox constractor/n";
	width = width;
	std::cout << "width="<<width<<"/n";
};

string TextBox::GetText() {
	return"";
}

void TextBox::SetText(string value) {
	value = value;
}
