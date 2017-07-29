#pragma once
#include "Control.h"
class IComponent :public Control
{
public:
	IComponent();
	virtual ~IComponent();
	virtual void setvisibility(bool visibility) = 0;
	virtual void setForeground(Color color) = 0;
	virtual void setBackgroundColor(Color color) = 0;
	virtual void setBorder(BorderType border) = 0;
};

