#pragma once
#include "../Common/IComponent.h"
using namespace std;

class TextBox:public IComponent{
protected:
	string value;
	size_t cursor;

public:
	TextBox(int, int , BorderType);
	void SetText(string);
	string GetText() { return value; }
	void setBackgroundColor(Color);
	void draw(Graphics&, int, int, size_t);
	void draw(Graphics & g, int start_x, int start_y);
	void mousePressed(int x, int y, bool isLeft);
	void draw(Graphics&);
	void keyDown(int, char);
};
