#pragma once
#include "../TextBox/TextBox.h"

using namespace std;

class Label: public TextBox {

public:
	Label(int, int);
	void SetText(string);
	void draw(Graphics& graphics);
	string GetText();
	void mousePressed( int x, int y, bool isLeft) {};
};
