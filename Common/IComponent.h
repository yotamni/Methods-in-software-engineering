#pragma once
#include "Control.h"
class IComponent :public Control
{	
	bool visibility;
	Color background, foreground;
public:
	IComponent();
	IComponent(int width, int hight, BorderType border);
	virtual ~IComponent();
	virtual void setvisibility(bool visibility);
	virtual void setForeground(Color color);
	virtual void setBackgroundColor(Color color);
	virtual void setBorder(BorderType border) ;
	void printBorder(Graphics&);
	int getWidth();
	int getHight();
};

