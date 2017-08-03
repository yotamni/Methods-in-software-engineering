#include "ComboBox.h"
#include <iostream>
#include <ctime>

void ComboBox::draw(Graphics& g)
{
	setBackgroundColor(Color::Blue);
	printBorder(g);
	showList->setTop(ComboBox::getTop() + 1);
	showList->setLeft(ComboBox::getLeft() + 1);
	showList->draw(g);
	chosenItem->setTop(ComboBox::getTop() + 6);
	chosenItem->setLeft(ComboBox::getLeft() + 5);
	listHolder->setTop(ComboBox::getTop() + 11);
	listHolder->setLeft(ComboBox::getLeft() + 5);
	chosenItem->draw(g);
	listHolder->draw(g);
	}

ComboBox::ComboBox(int width, vector<Label> listOptions)
{
	this->value = "";
	chosenItem = new TextBox(10, 5, BorderType::SingleBorder);
	chosenItem->SetText(value);
	showList = new Button(5, 5);
	showList->SetText("Open");
	this->list = listOptions;
	listHolder = new Panel(20,5);
	for (int i = 0; i < this->list.size(); i++)
		listHolder->addCompon(&list.at(i),getLeft()-i*30,getTop());
	this->listHolder->setvisibility(false);
}

void ComboBox::keyDown(int keycode, char character) {
	switch (keycode) {
		case VK_SPACE: {
			listHolder->setvisibility(true);
			break;
		}
		case VK_RETURN: {
			this->listHolder->setvisibility(true);
			break;
		}
		default: {
			this->value = "Pressed - " + keycode;
			chosenItem->SetText(this->value);
		}
	}
}

void ComboBox::mousePressed(const int x, const int y, const bool isLeft) {
	if (isLeft) {
		int Y = y - this->showList->getTop();
		int X = x - this->showList->getLeft();
		if (X >= 0 && Y >= 0 && X < this->showList->getWidth() && Y < this->showList->getHight())
		{
			this->listHolder->setvisibility(true); 
			//Control::setFocus(*listHolder);
		}
	}
}
void ComboBox::MousePressed(Control &control, int x, int y, bool isLeft) {
	
}

ComboBox::~ComboBox()
{
}
