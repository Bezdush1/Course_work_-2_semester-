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
            throw(Errors("Отрицательная начальная координата!", "x", _x, NULL));
        };
        if (_x > 0 && _y < 0) {
            throw(Errors("Отрицательная начальная координата!", "y", _y, NULL));
        }
        if (_x < 0 && _y < 0) {
            throw(Errors("Отрицательные начальные координаты!", "x и y", _x, _y));
        };
    };
    if (_x == 0 || _y == 0) {
        if (_x == 0 && _y != 0) {
            throw(Errors("Нулевая начальная координата!", "x", 0, NULL));
        };
        if (_x != 0 && _y == 0) {
            throw(Errors("Нулевая начальная координата!", "y", 0, NULL));
        }
        if (_x == 0 && _y == 0) {
            throw(Errors("Нулевые начальные координаты!", "x и y", 0, 0));
        };
    };
    if (_r < 0) {
        throw(Errors("Радиус не может быть отрицательным!", "r", _r, NULL));
    };
    if (_r == 0) {
        throw(Errors("Радиус не может =0!", "r", 0, NULL));
    };
    x = _x;
    y = _y;
    r = _r;
    if ((hwnd = GetConsoleWindow()) == 0) {
        throw(Errors("Ошибка получения идентификатора окна!", "hwnd", 0, NULL));
    };

    if ((hdc = GetDC(hwnd)) == 0) {
        throw(Errors("Ошибка получения контекста отображения!", "hdc", 0, NULL));
    };
    GetClientRect(hwnd, &rt);
};

Figure::~Figure()
{
    ReleaseDC(hwnd, hdc);
};

void Figure::move(int _x, int _y)
{
    //cout << "фигура перемещена" << endl;
};

void Figure::show()
{
   /* cout << "координата x" << x << endl;
    cout << "координата y" << y << endl;
    cout << "радиус" << r << endl;*/
};

void Figure::hide()
{
   /* cout << "скрытая координата x" << x << endl;
    cout << "скрытая координата y" << y << endl;
    cout << "скрытый радиус" << r << endl;*/
}
