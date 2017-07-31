#pragma once
#include "IComponent.h"
class IComposite :public IComponent
{
private:
	vector<Control*> container;
public:
	IComposite();
	virtual ~IComposite();
	void addCompon(Control* toAdd, short top, short left);
	void addCompon(Control*);
	void removeCompon(Control*);
	void drawAll(Graphics&);
};

