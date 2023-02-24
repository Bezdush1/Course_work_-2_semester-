#include "complex_figure.h"


void complex_figure::show() 
{
	c->show();
	t->show();
};

void complex_figure::hide() 
{
	c->hide();
	t->hide();
};

void complex_figure::move(int _x, int _y) 
{
	c->move(_x,_y);
	t->move(_x, _y);
};

complex_figure::~complex_figure() {};