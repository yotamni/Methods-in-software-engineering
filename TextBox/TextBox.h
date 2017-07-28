#include <string.h>
#include "../Common/Control.h"
using namespace std;

class TextBox:public Control{

	int width;
	int value;
public:
	TextBox(int);
	void SetText(string);
	string GetText();
};
