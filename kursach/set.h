#pragma once
#include<set>
#include "complex_figure.h"

class myset
{
protected:
	set<Figure*>  st;
public:
	void add(Figure*);
	void view();
	void deletion();
};