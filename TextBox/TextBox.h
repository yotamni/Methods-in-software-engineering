#pragma once
#include "../Common/IComponent.h"
using namespace std;

class TextBox:public IComponent{
protected:
	string value;
	int curser;
	int width;
	int hight;
public:
	TextBox(int width, int hight);
	void SetText(string);
	string GetText() { return value; }
	void setBackgroundColor(Color);
	void draw(Graphics&, int, int, size_t);
	void draw(Graphics & g, int start_x, int start_y);
	void draw(Graphics&);
	void setvisibility(bool visibility);
	void setForeground(Color color);
	void setBorder(BorderType border);
	int getWidth();
	int getHight();
};
