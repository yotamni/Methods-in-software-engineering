#include <string.h>

using namespace std;

class TextBox {

	int width;
	string value;
public:
	TextBox(int);
	void setText(string);
	string GetText();
};
