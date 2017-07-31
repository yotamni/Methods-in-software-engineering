#pragma once
#include "../Common/IComposite.h"
class Panel :public IComposite
{
public:
	Panel();
	~Panel();
	void draw(Graphics&);
	void keyDown(int keyCode, char charecter);
	void mousePressed(const int x, const int y, const bool isLeft);
	void getAllControls(vector<Control*>* controls);
};

