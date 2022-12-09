#include<iostream>
using namespace std;

//#define LOGICAL_TYPES

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Привет DataTypes\n";
#if defined LOGICAL_TYPES
	cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.0000000001 << endl;
	//bit - Binary Digit (Двоичная цифра) 0 или 1
#endif

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
}