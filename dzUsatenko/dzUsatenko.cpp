

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Календарь мicяця";
	cout << endl;
	int number_of_month;
	cout << "Введiть ваш номер мiсяця: ";
	cin >> number_of_month;
	switch (number_of_month) {
	case 1:
		cout << "Ciчень" << endl;
		break;
	case 2:
		cout << "Лютий"<<endl;
		break;
	case 3:
		cout << "Березень" << endl;
		break;
	case 4:
		cout << "Квітень" << endl;
		break;
	case 5:
		cout << "Травень" << endl;
		break;
	case 6:
		cout << "Червень" << endl;
		break;
	case 7:
		cout << "Липень" << endl;
		break;
	case 8:
		cout << "Серпень" << endl;
		break;
	case 9:
		cout << "Вересень" << endl;
		break;
	case 10:
		cout << "Жовтень" << endl;
		break;
	case 11:
		cout << "Листопад" << endl;
		break;
	case 12:
		cout << "Грудень" << endl;
		break;
	default:
		cout << "Невiрний номер";
		break;
	


	}
}
		

