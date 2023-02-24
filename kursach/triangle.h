#include "figure.h"
#pragma once

class triangle : public Figure 
{
public:
	triangle();
	triangle(int, int,int);
	void show() override;
	void hide() override;
	void move(int, int) override;
	~triangle();
};