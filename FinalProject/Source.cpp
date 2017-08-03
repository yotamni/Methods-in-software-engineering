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
	int i;
	Panel form(80,20);
	TextBox tb(20, 2, BorderType::SingleBorder);
	Label label(20, 2);
	label.SetText("name:");
	TextBox tb1(20, 2, BorderType::SingleBorder);
	NumericBox nb(20,3,0,0,0,100,7);
	form.addCompon(&tb1, 6, 10);
	form.addCompon(&label, 1, 1);
	form.addCompon(&tb, 1, 10);
	form.addCompon(&nb, 10, 1);
	EventEngine engine;
	Control::setFocus(tb);
	engine.run(form);
	cin >> i;
}