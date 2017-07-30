#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "../TextBox/TextBox.h"
#include "../Label/Label.h"
#include <iostream>
#include "../Panel/Panel.h"
using namespace std;

void main()
{

	int i;
	Panel form;
	
	TextBox tb(10, 5, BorderType::DoubleLineBorder);
	form.addCompon(&tb);
	EventEngine engine;
	Control::setFocus(tb);
	cout << "hii" << endl;
	engine.run(tb);
	cin >> i;
}