#include<iostream>
using namespace std;

#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");
#ifdef POINTERS_BASICS
	int a = 2;
	int* pa = &a;		//Pointer to 'a'
	cout << a << endl;	//значение переменной 'a'
	cout << &a << endl;	//взятие адреас переменной 'a' прямо при выводе
	cout << pa << endl;	//вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//разыменование указателя 'pa' и вывод на экран значения по адресу (переменной 'a')

	int* pb;	//просто объявление укзателя (без инициализации)
	int b = 3;
	pb = &b;	//инициализируем указатель после объявления

	//int - int
	//int* - указатель на int
	//double - double
	//double* - указатель на double  
#endif // POINTERS_BASICS

}

/*
----------------------------------------------------
& - Address-of operator  (Оператор взятия адреса)
* - Dereference operator (Оператор разыменования)
----------------------------------------------------
*/