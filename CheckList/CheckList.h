#pragma once
#include "../Panel/Panel.h"

class CheckList :public Panel {
	vector<string> options;
public:
	CheckList(int width, int hight, static vector<string>& choice);
	~CheckList();
};