#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	char n;
	cout << "Выберите функцию для выполнения" << endl;
	cout << "1. Суммирования" << endl;
	cout << "2. Вычитание" << endl;
	cout << "3. Умножение" << endl;
	cout << "4. Деление" << endl;
	cin >> n;

	switch (n)
	{
	case '1':
		cout << MySum(10,3) << endl;
		break;
	case '2':
		cout << MySub(10,3) << endl;
		break;
	case '3':
		cout << "Функция в разработке" << endl;
		break;
	case '4':
		cout << "Функция в разработке" << endl;
		break;
	default:
		cout << "Номер функции неправильный" << endl;
		return false;
		break;
	}
	system("pause");
	return 0;
}
