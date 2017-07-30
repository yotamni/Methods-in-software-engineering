#include "../Common/IComponent.h"
using namespace std;

class NumericBox :public IComponent {
protected:
	int value;
	int min;
	int max;
	int width;
	size_t cursor;
	bool visibility;

public:
	NumericBox(int _width, int _min, int _max);
	void draw(Graphics& g, int x, int y, size_t z) {};
	void keyDown(int keycode, char character);
	void setValue(int value) { this->value = value; }
	void add() { this->value++; }
	void reduce() { this->value--; }
	int getValue() { return value; }
	void setvisibility(bool visibility) { this->visibility = visibility; }
	void setForeground(Color color) {; }
	void setBackgroundColor(Color color) { ; }
	void setBorder(BorderType border);
	void draw(Graphics&);
	void mousePressed(int x, int y, bool isLeft);
	void setWidth(int width) { this->width = width; }
	void setMin(int min) { this->min = min; }
	void setMax(int max) { this->max = max; }
};
