#include "IComposite.h"

IComposite::IComposite()
{
	cout << "nlalal" << endl;
}
IComposite::~IComposite()
{
}

void IComposite::addCompon(Control* toAdd,short top, short left) {
	toAdd->setTop(top);
	toAdd->setLeft(left);
	container.push_back(toAdd);
}


void IComposite::addCompon(Control* toAdd)
{
	container.push_back(toAdd);
}

void IComposite::removeCompon(Control * toRemove)
{
	for (std::vector<Control*>::iterator it = container.begin(); it != container.end(); ++it) {
		//To Do : if(it==toRemove) then pop the element
	}
}

void IComposite::drawAll(Graphics& g)
{
	Control* tmp;
	size_t componSize = container.size();
	for (int i = 0; i < componSize; i++) {
		tmp = container[i];
		tmp->draw(g);
	}
}
