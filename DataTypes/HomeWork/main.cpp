#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	double money;
	cout << "������� �������� �����: "; cin >> money;
	money += .0000000000001;
	cout << money << endl;
	int grn = money;	//������� �������������� ����� �� 'double' � 'int' � ������� ������
	cout << grn << " ���.\t";
	double cop = (money - grn) * 100;
	cout << cop << " ���.\n";
}