#pragma once
#include "../Common/IComposite.h"
#include "../Button/Button.h"
using namespace std;

class NumericBox :public IComposite, MouseListener {
protected:
	Button up;
	Button down;
	Label text;
	int _min;
	int _max;
public:
	NumericBox(int width, int hight, int top, int left, int _min, int _max);
	void draw(Graphics& g, int x, int y, size_t z) {};
	//void keyDown(int keycode, char character);
	/*void add() { this->value++; }
	void reduce() { this->value--; }*/
	void draw(Graphics&);


};
