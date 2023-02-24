#pragma once
using namespace std;
#include <iostream>
#include <windows.h>
#include <windowsx.h>


class Figure
{
protected:
	HWND hwnd;
	HDC hdc;
	RECT rt;
	int x, y, r;
public:
	Figure();
	Figure(int _x, int _y, int _r);
	~Figure();
	virtual void show()=0;
	virtual void hide()=0;
	virtual void move(int, int)=0;

	class Errors {
	public:
		string cause;
		string var;
		int a;
		int b;
		Errors(string _cause, string _a_or_b, int _a, int _b) {
			cause = _cause;
			var = _a_or_b;
			a = _a;
			b = _b;
		};
	};
};
