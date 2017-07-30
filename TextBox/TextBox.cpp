#include "TextBox.h"
#include <iostream>
#include <ctime>

TextBox::TextBox(int width, int hight, BorderType border):IComponent(width,hight,border) {
	cout << "C'tor TextBox" << endl;
	value = "";
};

void TextBox::SetText(string value) {
	value = value;
	Graphics g = Graphics();
	g.write(value);
}
void TextBox::setBackgroundColor(Color color) {
	Graphics g = Graphics();
	g.setBackground(color);
	
}

void TextBox::draw(Graphics& g, int start_x, int start_y, size_t z) {

}

void TextBox::draw(Graphics& g)
{
	printBorder(g);
	g.moveTo(this->getTop() + 1,this->getLeft()+1 );
	cout<< this->GetText();
	g.setCursorVisibility(true);
}
void TextBox::keyDown(int keyCode, char charecter) {
	cursor = this->getLeft() + value.size();
	if (cursor >= 0 && cursor <= getWidth()) {
		if (charecter >= VK_SPACE && charecter <= '~' && value.size() < getWidth() - 1) {
			string str = string(1, charecter);
			if (getWidth() - value.size() != 0 && cursor >= value.size()) value.replace(cursor++, 1, str);
			else if (getWidth() - value.size() != 0 && cursor < value.size()) value.insert(cursor++, str);
		}
		else {
			switch (keyCode) {
			case VK_BACK:
			{
				if (cursor <= value.size() && cursor != 0) {
					value.erase(cursor - 1, 1);
					if (cursor > 0) --cursor;
				}
				break;
			}
			case VK_RIGHT: { if (cursor < value.size())	cursor++; break; }
			case VK_LEFT: { if (cursor > 0) cursor--; break; }
			case VK_HOME: { cursor = 0; break; }
			case VK_END: { cursor = value.size(); break; }
			case VK_DELETE: { if (cursor <= value.size()) { value.erase(cursor, 1); break; } }
			}
		}
	}
}
