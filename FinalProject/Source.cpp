#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "../TextBox/TextBox.h"
#include "../NumericBox/NumericBox.h"
#include "../Label/Label.h"
#include <iostream>
#include "../Panel/Panel.h"
using namespace std;

void main()
{
	Panel form(80, 20);
	Label header(10, 2);
	header.SetText("Form");
	Label labelName(9, 2);
	labelName.SetText("Name:");
	TextBox tbForName(20, 2, BorderType::SingleBorder);
	Label labelAddress(9, 2);
	labelAddress.SetText("Address:");
	TextBox tbForAddress(20, 2, BorderType::SingleBorder);
	Label labelAge(9, 2);
	labelAge.SetText("Age:");
	NumericBox nbForAge(15,4,0,0,0,100,0);
	form.addCompon(&header,1,38);
	form.addCompon(&labelName,3,1);
	form.addCompon(&tbForName,3,10);
	form.addCompon(&labelAddress,6,1);
	form.addCompon(&tbForAddress,6,10);
	form.addCompon(&labelAge, 9, 1);
	form.addCompon(&nbForAge, 9, 10);
	EventEngine engine;
	Control::setFocus(tbForName);
	engine.run(form);
}