#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) ������������� ���������
#define ASSIGNMENT_OPERATOR			//2)�������� ������������

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARITHMETICAL_OPERATORS
	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary aster
	//*3;		//�������� '*' ����� ���� ������ ��������.

	//Unary:	+, -;
	//Binary:	+, -, *, /, %;
	//	% - ������� �� �������
	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << "\n------------------------------\n";
	cout << 3. / 17 << endl;
	cout << 3. % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//			l-value = r-value;
	//	l-value - ���������� �����
	//	r-value - ��������� ������
	/*int a = 2;
	int b = a * 4 + a * 5;
	const int MAX_SPEED = 250;*/
	
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

}