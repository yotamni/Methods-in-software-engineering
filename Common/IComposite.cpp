#include "IComposite.h"
#include "../TextBox/TextBox.h"

IComposite::IComposite(): IComponent(){}
IComposite::IComposite(int hight, int width, int top, int left, BorderType border=BorderType::NoneType): IComponent(width, hight, border, top, left){}
IComposite::~IComposite(){}

void IComposite::addCompon(Control* toAdd,short top, short left) {
	toAdd->setTop(top);
	toAdd->setLeft(left);
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
	auto onfocus = Control::getFocus();
	Control* tmp;
	size_t componSize = container.size();
	for (int i = 0; i < componSize; i++) {
		tmp = container[i];	
		//******************** Yotam 02/08
		if (tmp == onfocus) {
			setFocusColor(g, Color::Green);
		}
		else {
			setFocusColor(g, Color::White);
		}
		//****************************//
		tmp->draw(g);
		
	}
	
	//************************ Yotam 02/08
	setFocusColor(g, Color::White);
	auto textbox = dynamic_cast<TextBox*>(getFocus());
	if (textbox) g.moveTo(textbox->getLeft() + textbox->getCursor() + 1, textbox->getTop() + 1);
	g.setCursorVisibility(true);
	//******************************//
}

void IComposite::setFocusColor(Graphics& g, Color color) {
	g.setForeground(color);
}
