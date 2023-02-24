//Бобков Максим 21вп2
//вариант 5
//треугольник(равносторонний), окружность, сложная фигура(вписанный в окружность треугольник)

//Структура данных : 
//множество, базовый класс, агрегация

//Функции:
//создать, скрыть, показать фигуру
//переместить фигуру
//добавить фигуру в множество
//просмотреть множество

#include <iostream>
#include "set.h"
const int NotUsed = system("color F0");

int main()
{
	SetConsoleTitle((LPCWSTR)L"21VP2_5_Figures");
	setlocale(LC_ALL, "rus");
	try
	{
		triangle t(350,350,100);
		t.show();
		Sleep(3000);
		circle c(350, 350, 100);
		c.show();
		Sleep(3000);

		/*complex_figure cf(&c, &t);
		cout << "вывод сложной фигуры с центром в точке O(350,350) и радиусом=100" << endl;
		cf.show();
		Sleep(5000);
		system("pause");
		cout << "скрывание сложной фигуры с центром в точке O(350,350)" << endl;
		cf.hide();
		Sleep(5000);
		system("pause");
		cout << "перемещение сложной фигуры в точку O(650,300)" << endl;
		cf.move(650, 300);
		Sleep(5000);
		system("pause");
		cout << "создание множества, добавление сложной фигуры в множество, просмотр и удаление множества" << endl;
		myset st;
		st.add(&cf);
		st.view();
		Sleep(5000);
		st.deletion();
		cout << "перемещение сложной фигуры в точку O(1500,1500)" << endl;
		cf.move(1500, 1500);
		Sleep(5000);
		system("pause");*/
	}
	catch (Figure::Errors error)
	{
		cout << error.cause << endl;
		cout << error.var << " : " << error.a << " " << error.b << endl;
	}
}