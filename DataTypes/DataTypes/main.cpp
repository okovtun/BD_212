#include<iostream>
using namespace std;

//#define LOGICAL_TYPES

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "������ DataTypes\n";
#if defined LOGICAL_TYPES
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.0000000001 << endl;
	//bit - Binary Digit (�������� �����) 0 ��� 1
#endif
}