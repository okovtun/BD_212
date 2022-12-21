#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	double money;
	cout << "¬ведите денежную сумму: "; cin >> money;
	money += .0000000000001;
	cout << money << endl;
	int grn = money;	//не€вное преобразование типов из 'double' в 'int' с потерей данных
	cout << grn << " грн.\t";
	double cop = (money - grn) * 100;
	cout << cop << " коп.\n";
}