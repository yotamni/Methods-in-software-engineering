#pragma once
#include "../Common/IComposite.h"
#include "../Button/Button.h"
#include "../TextBox/TextBox.h"
#include "../Panel/Panel.h"
#include "../Label/Label.h"

class ComboBox: public IComposite, MouseListener
{
	Button *showList;
	TextBox* chosenItem;
	vector<Label> list;
	string value;
	Panel* listHolder;
	
public:
	ComboBox(int width, vector<Label> listOptions);
	~ComboBox();
	void draw(Graphics& g, int x, int y, size_t z) {};
	void keyDown(int keycode, char character);
	void mousePressed(const int x, const int y, const bool isLeft);
	void MousePressed(Control &control, int x, int y, bool isLeft);
	void draw(Graphics&);

};

