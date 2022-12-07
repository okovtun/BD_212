#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
//Директива #define (ОПРЕДЕЛИТЬ) создает макроопределение (макрос),
//а именно, показывает компилятору ЧТО_ЗАМЕНИТЬ ЧЕМ_ЗИМЕНИТЬ.
//У каждого макроса есть имя (name) и значение (value)
#define name value	//Везде, где компилятор встретит в коде name,
					//заменить его на value
#define PI 3.14159

#define ELOCHKA		//макрос без значения

#if defined ELOCHKA	//начало блока кода
	//Блок кода, для Ёлочки
#endif				//конец блока кода

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA	//начало блока кода
//ЕСЛИ ОПРЕДЕЛЕНО ELOCHKA, то нижеследующий код будет виден компилятору, 
//до директивы #endif
	cout << offset << "В лесу родилась ёлочка,\n";
	cout << offset << "В лесу она росла.\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зелёная была.\n";
	cout << "\n";
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, ёлочка, бай - бай!\"\n";
	cout << offset << "Мороз снежком укутывал :\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << "\n";
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << "\n";
	cout << offset << "Чу!Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n";
	cout << "\n";
	cout << offset << "Везёт лошадка дровенки\n";
	cout << offset << "А в дровнях мужичок\n";
	cout << offset << "Срубил он нашу ёлочку\n";
	cout << offset << "Под самый корешок.\n";
	cout << "\n";
	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "На праздник к нам пришла,\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла.\n";
#endif	//конец блока кода
	cout << PI << endl;
}