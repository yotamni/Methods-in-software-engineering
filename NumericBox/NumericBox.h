#pragma once
#include "../Common/IComposite.h"
#include "../Button/Button.h"
using namespace std;

class NumericBox :public IComposite, MouseListener {
private:
	void addCompon(Control* toAdd, short top, short left);
protected:
	Button up;
	Button down;
	Label text;
	int _min;
	int _max;
public:
	NumericBox(int width, int hight, int top, int left, int _min, int _max, int);
	void draw(Graphics& g, int x, int y, size_t z) {};
	void keyDown(int keycode, char character);
	void mousePressed(int x, int y, bool isLeft);
	void MousePressed(Control &control, int x, int y, bool isLeft);
	void draw(Graphics&);
	void increaseText();
	void decreaseText();
};
