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
	Panel form;
	
	TextBox tb(20, 2, BorderType::DoubleLineBorder);
	NumericBox nb(5, 0, 50);
	nb.setValue(0);
	form.addCompon(&tb);
	form.addCompon(&nb);
	EventEngine engine;
	Control::setFocus(nb);
	cout << "hii" << endl;
	engine.run(nb);
	cin >> i;
}