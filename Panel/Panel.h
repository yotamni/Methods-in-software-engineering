#pragma once
#include "../Common/IComposite.h"
class Panel :public IComposite
{
public:
	Panel(int, int );
	~Panel();
	void draw(Graphics&);
	void keyDown(int keyCode, char charecter);
	void mousePressed(const int x, const int y, const bool isLeft);
	void addCompon(Control * toAdd, short top, short left);
	void getAllControls(vector<Control*>* controls);
};

