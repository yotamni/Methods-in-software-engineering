#pragma once
#include "IComponent.h"
class IComposite :public IComponent
{
protected:
	vector<Control*> container;
public:
	IComposite();
	IComposite(int hight, int width, int top, int left, BorderType border);
	virtual ~IComposite();
	virtual void addCompon(Control* toAdd, short top, short left);
//	virtual void addCompon(Control*);
	void removeCompon(Control*);
	void drawAll(Graphics&);
	void setFocusColor(Graphics&,Color color);
};

