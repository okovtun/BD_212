#include <iostream>
#include<iomanip>
using namespace std;
//#define Qty_check 

int main() {
	setlocale(LC_ALL, "Rus");
	double Iphone_price;
	cout << "\n";
	cout << "������� ��������� ������ � ������� ������� \"Enter\":\t\n";	cin >> Iphone_price;
	cout.precision(2);
	cout << fixed << endl;
	cout << Iphone_price << endl;
	cout << "\n\n";
	int Qty;// ���������� ������
	cout << "������� ���������� ������ � ������ � ������� ������� \"Enter\":\t\n";
	cin >> Qty;
	if (Qty < 1) {
		cout << "���������� ������ �� ����� ���� ������ 1 �����! ������� ������ ���������� ������ � ��������� ������ �����!" << endl;
	}
#if defined Qty_check
	if ((Qty >= 1.1) && (Qty <= 1.9)) { cout << "������� ������������ �������� ����������, ������� ����� ����� � ���������� �����!" << endl; }
	return 0;
#endif

	cout << "\n";
	double discount = 0.05;// ������ 5% �� ���������
	double price = Iphone_price * Qty - Iphone_price * Qty*discount;
	cout << "��������� ����� �������: " << Iphone_price << endl;
	cout << "���������� ������ ������:" << Qty << endl;
	cout << "��������� ������ ������ � ������ ������ � 5% ����������:\t\n\n" << price << "\n\n";

}