#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "../TextBox/TextBox.h"
#include "../NumericBox/NumericBox.h"
#include "../Label/Label.h"
#include <iostream>
#include "../Panel/Panel.h"
#include "../ComboBox/ComboBox.h"
using namespace std;

vector<Label> createList(){
	Label lbl1(20, 2);
	Label lbl2(20, 2);
	Label lbl3(20, 2);
	lbl1.SetText("Option 1");
	lbl2.SetText("Option 2");
	vector<Label> Vector;
	Vector.push_back(lbl1);
	Vector.push_back(lbl2);
	Vector.push_back(lbl3);
	return Vector;
}

void main()
{
	int i;
	Panel form(80,20);
	TextBox tb(20, 2, BorderType::SingleBorder);
	Label label(20, 2);
	label.SetText("name:");
	TextBox tb1(20, 2, BorderType::SingleBorder);
	NumericBox nb(15,4,0,0,0,100,7);
	ComboBox cb(20, createList());
	form.addCompon(&tb1, 6, 10);
	form.addCompon(&label, 1, 1);
	form.addCompon(&tb, 1, 10);
	form.addCompon(&nb, 10, 1);
	form.addCompon(&cb, 10, 10);
	EventEngine engine;
	Control::setFocus(tb);
	engine.run(form);
	cin >> i;
}