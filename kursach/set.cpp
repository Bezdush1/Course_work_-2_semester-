#include "set.h"

void myset::add(Figure* _figure)
{
	st.insert(_figure);
};

void myset::view() 
{
		for (auto& i : st)
		{
			i->show();
		}
};

void myset::deletion()
{
	st.clear();
}
