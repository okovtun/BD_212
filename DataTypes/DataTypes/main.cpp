#include<iostream>
using namespace std;

//#define LOGICAL_TYPES
//#define DATA_TYPES
//#define DECLARATION_AND_INITIALISATION
//#define COFFEE

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

#ifdef DATA_TYPES
	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << "  signed long long:" << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << "unsigned long long:" << 0 << " ... " << ULLONG_MAX << endl;
	cout << "\n-----------------------------------------------------\n";

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "\n-----------------------------------------------------\n";

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif // DATA_TYPES

#ifdef DECLARATION_AND_INITIALISATION
	//				type name;
//identifier - ��� ���

	int _1stPlace;
	//int namespace;	//expected an identifier

	int a;
	int t;
	double price_of_coffee;	//snake_case_style
	//int PascalCaseStyle;
	//int CamelCaseStyle;
	//int BigCamel;
	//int smallCamel;
	cout << price_of_coffee << endl;
	//�������������������
	//������������� - ��� ���������� ���������� ��������.
	int a;		//���������� ���������� ��� �������������
	int b = 0;	//������������� ���������� ��� ����������
	int c;
	c = 0;		//������������� ���������� ����� ����������, ��� ������ ����������.
	int d;
	cout << "������ �����: "; cin >> d;	//������������� ������ � ����������  
#endif // DECLARATION_AND_INITIALISATION

#ifdef COFFEE
	double price_of_coffe;
	int number_of_cups;
	cout << "������� ��������� ����: "; cin >> price_of_coffe;
	cout << "������� ���������� �����: "; cin >> number_of_cups;
	double total_price = price_of_coffe * number_of_cups;
	cout << "����� ���������: " << total_price << endl;
#endif // COFFEE

}

/*
---------------------------------
1. ABC....Zabc...z0123...9_;
2. ��� ���������� �� ����� ���������� �������� �����
3. ����� ���������� ����������������;
4. ��� ���������� ���������� ���� ������������ �������� ����� ����� C++;
---------------------------------
*/