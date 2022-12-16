#include <iostream>
#include<iomanip>
using namespace std;
//#define Qty_check 

int main() {
	setlocale(LC_ALL, "Rus");
	double Iphone_price;
	cout << "\n";
	cout << "Введите стоимость товара и нажмите клавишу \"Enter\":\t\n";	cin >> Iphone_price;
	cout.precision(2);
	cout << fixed << endl;
	cout << Iphone_price << endl;
	cout << "\n\n";
	int Qty;// количество товара
	cout << "Введите количество товара в штуках и нажмите клавишу \"Enter\":\t\n";
	cin >> Qty;
	if (Qty < 1) {
		cout << "Количество товара не может быть меньше 1 штуки! Введите верное количество товара и повторите расчет снова!" << endl;
	}
#if defined Qty_check
	if ((Qty >= 1.1) && (Qty <= 1.9)) { cout << "Введено некорректное значение количества, введите целое число и попробуйте снова!" << endl; }
	return 0;
#endif

	cout << "\n";
	double discount = 0.05;// скидка 5% от стоимости
	double price = Iphone_price * Qty - Iphone_price * Qty*discount;
	cout << "Стоимость одной единицы: " << Iphone_price << endl;
	cout << "Количество единиц товара:" << Qty << endl;
	cout << "Стоиомсть вашего товара с учетом скидки в 5% составляет:\t\n\n" << price << "\n\n";

}