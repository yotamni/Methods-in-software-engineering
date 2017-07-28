#include <string.h>
#include "../Common/Control.h"
using namespace std;

class TextBox:public Control{

	string value;

public:
	TextBox(int);
	void SetText(string);
	string GetText() { return value; }
	void setBackGround(Color);
	void draw(Graphics&, int, int, size_t);
};
