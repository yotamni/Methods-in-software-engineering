#include "EventEngine.h"
#include <vector>

using namespace std;

EventEngine::EventEngine(DWORD input, DWORD output)
	: _console(GetStdHandle(input)), _graphics(output)
{
	GetConsoleMode(_console, &_consoleMode);
	SetConsoleMode(_console, ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT);
}

void EventEngine::run(Control &c)
{
	for (bool redraw = true;;)
	{
		if (redraw)
		{
			_graphics.clearScreen();
			_graphics.setCursorVisibility(false);
			for (size_t p = 0; p < 5; ++p)
				c.draw(_graphics);
			//	c.draw(_graphics, 0, 0, p);
			redraw = false;
		}

		INPUT_RECORD record;
		DWORD count;
		ReadConsoleInput(_console, &record, 1, &count);
		switch (record.EventType)
		{
		case KEY_EVENT:
		{
			auto f = Control::getFocus();
			if (f != nullptr && record.Event.KeyEvent.bKeyDown)
			{
				auto code = record.Event.KeyEvent.wVirtualKeyCode;
				auto chr = record.Event.KeyEvent.uChar.AsciiChar;
				if (code == VK_TAB)
					moveFocus(c, f);
				else
					f->keyDown(code, chr);
				redraw = true;
			}
			break;
		}
		case MOUSE_EVENT:
		{
			auto button = record.Event.MouseEvent.dwButtonState;
			auto coord = record.Event.MouseEvent.dwMousePosition;
			auto x = coord.X - c.getLeft();
			auto y = coord.Y - c.getTop();
			if (button == FROM_LEFT_1ST_BUTTON_PRESSED || button == RIGHTMOST_BUTTON_PRESSED)
			{
				c.mousePressed(x, y, button == FROM_LEFT_1ST_BUTTON_PRESSED);
				redraw = true;
			}
			break;
		}
		default:
			break;
		}
	}
}

EventEngine::~EventEngine()
{
	SetConsoleMode(_console, _consoleMode);
}

void EventEngine::moveFocus(Control &main, Control *focused)
{
	vector<Control*> controls;
	controls = main.getAllControls();
	cout << controls.size();
	int i=0;
	for (int j = 0; j < controls.size(); j++)
		if (focused = controls.at(j))
			i = j;
	auto it = find(controls.begin(), controls.end(), controls.at(i));
	do {
		i--;
		cout << controls.at(i)->canGetFocus() << endl;
		if (i == 0) {
			it = controls.end();
			i = controls.size() - 1;
		}
		it = find(controls.begin(), controls.end(), controls.at(i));
	} while (!(*it)->canGetFocus());
	/*while (i<=controls.size()){
		cout << "loop";
		i = i - 1;
		if (controls.at(i) == focused) {
			
			cout << "sdsa";
			auto it = find(controls.begin(), controls.end(), controls.at(i));
			if ((*it)->canGetFocus()) {
				Control::setFocus(**it);
				break;
			}
			break;
		}
	}*/
}