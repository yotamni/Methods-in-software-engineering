#pragma once
#include "../Common/IComposite.h"
class Panel :public IComposite
{
public:
	Panel();
	~Panel();
	void draw(Graphics&);
	void keyDown(int keyCode, char charecter);
};

