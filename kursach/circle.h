#pragma once
#include "figure.h"

class circle : public Figure 
{
public:
	circle();
	circle (int, int, int);
	void show() override;
	void hide() override;
	void move(int, int) override;
	~circle();
};