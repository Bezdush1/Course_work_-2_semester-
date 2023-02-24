#include "circle.h"

//circle::circle()
//{
//	this->x = 400;
//	this->y = 400;
//	this->r = 100;
//}

circle::circle(int x_, int y_, int r_) : Figure(x_, y_, r_) {};

void circle::show()
{
	int left = x - r;
	int right = x + r;
	int top = y - r;
	int bottom = y + r;
	/*if (top <= rt.top || left <= rt.left || right >= rt.right || bottom >= rt.bottom)
	{
		if (top <= rt.top && left > rt.left && right < rt.right && bottom < rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "y", y, NULL));
		};
		if (top > rt.top && left <= rt.left && right < rt.right && bottom < rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "x", x, NULL));
		};
		if (top > rt.top && left > rt.left && right >= rt.right && bottom < rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "x", x, NULL));
		};
		if (top > rt.top && left > rt.left && right < rt.right && bottom >= rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "y", y, NULL));
		};
		throw(Errors("Неверные значения координат! Фигура не покажется полностью.", "x и y", x, y));
	};*/
	HPEN pen;
	pen = CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
	SelectObject(hdc, pen);
	Ellipse(hdc, left, bottom, right, top);
	DeleteObject(pen);
};

void circle::hide()
{
	int left = x - r;
	int right = x + r;
	int top = y - r;
	int bottom = y + r;
	HPEN pen;
	HBRUSH brush;
	pen = CreatePen(PS_SOLID, 3, RGB(243, 243, 243));
	brush = CreateSolidBrush(RGB(243, 243, 243));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Ellipse(hdc, left, bottom, right, top);
	DeleteObject(pen);
	DeleteObject(brush);
};

void circle::move(int _x, int _y) 
{
	this->hide();
	this->x = _x;
	this->y = _y;
	this->show();
};

circle::~circle() {};
