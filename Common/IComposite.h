#pragma once
#include "IComponent.h"
class IComposite :
	public IComponent
{
public:
	IComposite();
	virtual ~IComposite();
};

