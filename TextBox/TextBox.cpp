#include "TextBox.h"
#include <iostream>
#include <ctime>

TextBox::TextBox(int width, int hight):width(width), hight(hight) {
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
//void TextBox::draw(Graphics& g, int start_x, int start_y) {
//	//first button
//	short len_x = width;
//	short len_y = hight;
//	printf("%c", '\xDA');
//	short i;
//	for (i = 0; i < len_x; i++) {
//		printf("%c", '\xC4');
//	}
//	printf("%c", '\xBF');
//	for (i = 1; i < len_y; i++) {
//		g.moveTo(start_x, (start_y + i));
//	//	c = { start_x, start_y + i };
//	//	SetConsoleCursorPosition(h, c);
//		printf("%c", '\xB3');
//		g.moveTo((start_x + len_x + 1), (start_y + i));
//	//	c = { start_x + len_x + 1, start_y + i };
//	//	SetConsoleCursorPosition(h, c);
//		printf("%c", '\xB3');
//	}
//	g.moveTo(start_x, (start_y + i));
////	c = { start_x, start_y + i };
////	SetConsoleCursorPosition(h, c);
//	printf("%c", '\xc0');
//	for (short i = 0; i < len_x; i++) {
//		printf("%c", '\xC4');
//	}
//	printf("%c", '\xd9');
//	//end first button
//	/*SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
//
//	c = { start_x + 1,start_y + 1 };
//	SetConsoleCursorPosition(h, c);
//	printf("click me");*/
//
//}

void TextBox::draw(Graphics& g)
{
	//set cursor position example
	g.moveTo(this->getLeft(), this->getTop());
	printf("%c", '\xDA');
	for (short i = 0; i < width; i++) {
		printf("%c", '\xC4');
	}
	printf("%c", '\xBF');
	for (short i = 1; i < hight; i++) {
		g.moveTo(this->getLeft(), (this->getTop() + i));
		printf("%c", '\xB3');
	}
	printf("%c", '\xC0');
	for (short i = 1; i < width; i++) {
		g.moveTo((this->getLeft()+i), this->getTop());
		printf("%c", '\xC4');
	}
	
	//	coord = { 7, 12 };
	//	SetConsoleCursorPosition(outHandle, coord);
	//printf("%c", '\xc0');
	//for (short i = 0; i < 5; i++) {
	//	printf("%c", '\xC4');
	//}
	//printf("%c", '\xd9');
}

void TextBox::setvisibility(bool visibility) {

}
void TextBox::setForeground(Color color) {

}

void TextBox::setBorder(BorderType border) {

}

int TextBox::getWidth()
{
	return width;
}

int TextBox::getHight()
{
	return hight;
}
