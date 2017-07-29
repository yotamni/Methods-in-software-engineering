#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "../TextBox/TextBox.h"
#include "../Label/Label.h"
#include <iostream>
using namespace std;

void main()
{

	int i;

	TextBox tb(10, 5);

	EventEngine engine;
	cout << "hii" << endl;
	engine.run(tb);
	cin >> i;
}