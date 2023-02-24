#pragma once
#include "triangle.h"
#include "circle.h"

class complex_figure : public Figure 
{
private:
	circle* c;
	triangle* t;
public:
	complex_figure(circle* _c, triangle* _t) : c(_c), t(_t) {}
	void show() override;
	void hide() override;
	void move(int, int) override;
	~complex_figure();
};