#include "../Common/Graphics.h"
#include "../Common/EventEngine.h"
#include "../TextBox/TextBox.h"
#include "../Label/Label.h"
#include <iostream>
using namespace std;

void main()
{
	Graphics g = Graphics();
	int i;
	//g.write("hello");
	//g.write(5, 5, "hello world");	
	g.setCursorVisibility(true);
	
	TextBox textBox= TextBox(5);
	textBox.setBackGround(Color::Blue);
	textBox.SetText("hello world!!!");
	textBox.draw(g, 7, 4, 6);
	Control::setFocus(textBox);
	EventEngine engine;
	//engine.run(textBox);
	cin >> i;
}