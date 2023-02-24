#include "triangle.h"

//triangle::triangle()
//{
//	this->x = 400;
//	this->y = 400;
//	this->r = 100;
//}

triangle::triangle(int x_, int y_, int r_) : Figure(x_, y_, r_) {};

void triangle::show()
{
	int a = r * 1.731;
	int h = 3 * r / 2;
	int a_x = x;
	int a_y = y - r;
	int b_x = x - a / 2;
	int b_y = y - r + h;
	int c_x = x + a / 2;
	int c_y = y - r + h;
	if (a_y <= rt.top || b_x <= rt.left || c_x >= rt.right || c_y >= rt.bottom)
	{
		if (a_y <= rt.top && b_x > rt.left && c_x < rt.right && c_y < rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "y", y, NULL));
		};
		if (a_y > rt.top && b_x <= rt.left && c_x < rt.right && c_y < rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "x", x, NULL));
		};
		if (a_y > rt.top && b_x > rt.left && c_x >= rt.right && c_y < rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "x", x, NULL));
		};
		if (a_y > rt.top && b_x > rt.left && c_x < rt.right && c_y >= rt.bottom)
		{
			throw(Errors("Неверное значение координаты! Фигура не покажется полностью.", "y", y, NULL));
		};
		throw(Errors("Неверные значения координат! Фигура не покажется полностью.", "x и y", x, y));
	};
	HPEN pen;
	pen = CreatePen(PS_SOLID, 3, RGB(0, 128, 0));
	SelectObject(hdc, pen);
	POINT points[] = { {a_x,a_y},{b_x,b_y},{c_x,c_y} };
	Polygon(hdc, points, 3);
	DeleteObject(pen);
};

void triangle::hide()
{
	int a = r * 1.731;
	int h = 3 * r / 2;
	int a_x = x;
	int a_y = y - r;
	int b_x = x - a / 2;
	int b_y = y - r + h;
	int c_x = x + a / 2;
	int c_y = y - r + h;
	HPEN pen;
	HBRUSH brush;
	pen = CreatePen(PS_SOLID, 3, RGB(243, 243, 243));
	brush = CreateSolidBrush(RGB(243, 243, 243));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	POINT points[] = { {a_x,a_y},{b_x,b_y},{c_x,c_y} };
	Polygon(hdc, points, 3);
	DeleteObject(pen);
	DeleteObject(brush);
};

void triangle::move(int _x, int _y) 
{
	this->hide();
	this->x= _x;
	this->y = _y;
	this->show();
};

triangle::~triangle() {};
