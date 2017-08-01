#pragma once
#include "IComponent.h"

class IComposite :public IComponent
{

public:
	IComposite();
	IComposite(int hight, int width, int top, int left, BorderType border);
	virtual ~IComposite();
	virtual void addCompon(Control* toAdd, short top, short left);
//	virtual void addCompon(Control*);
	void removeCompon(Control*);
	void drawAll(Graphics&);
	vector<Control*> getAllControls() { return container; }
};

