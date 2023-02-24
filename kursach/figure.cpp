#include "figure.h"

Figure::Figure()
{
    this->x = 400;
    this->y = 400;
    this->r = 100;

}

Figure::Figure(int _x, int _y, int _r) {
    hwnd = 0;
    if (_x < 0 || _y < 0) {
        if (_x < 0 && _y > 0) {
            throw(Errors("������������� ��������� ����������!", "x", _x, NULL));
        };
        if (_x > 0 && _y < 0) {
            throw(Errors("������������� ��������� ����������!", "y", _y, NULL));
        }
        if (_x < 0 && _y < 0) {
            throw(Errors("������������� ��������� ����������!", "x � y", _x, _y));
        };
    };
    if (_x == 0 || _y == 0) {
        if (_x == 0 && _y != 0) {
            throw(Errors("������� ��������� ����������!", "x", 0, NULL));
        };
        if (_x != 0 && _y == 0) {
            throw(Errors("������� ��������� ����������!", "y", 0, NULL));
        }
        if (_x == 0 && _y == 0) {
            throw(Errors("������� ��������� ����������!", "x � y", 0, 0));
        };
    };
    if (_r < 0) {
        throw(Errors("������ �� ����� ���� �������������!", "r", _r, NULL));
    };
    if (_r == 0) {
        throw(Errors("������ �� ����� =0!", "r", 0, NULL));
    };
    x = _x;
    y = _y;
    r = _r;
    if ((hwnd = GetConsoleWindow()) == 0) {
        throw(Errors("������ ��������� �������������� ����!", "hwnd", 0, NULL));
    };

    if ((hdc = GetDC(hwnd)) == 0) {
        throw(Errors("������ ��������� ��������� �����������!", "hdc", 0, NULL));
    };
    GetClientRect(hwnd, &rt);
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};

void Figure::move(int _x, int _y)
{
    //cout << "������ ����������" << endl;
};

void Figure::show()
{
   /* cout << "���������� x" << x << endl;
    cout << "���������� y" << y << endl;
    cout << "������" << r << endl;*/
};

void Figure::hide()
{
   /* cout << "������� ���������� x" << x << endl;
    cout << "������� ���������� y" << y << endl;
    cout << "������� ������" << r << endl;*/
}
