#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	char n;
	cout << "�������� ������� ��� ����������" << endl;
	cout << "1. ������������" << endl;
	cout << "2. ���������" << endl;
	cout << "3. ���������" << endl;
	cout << "4. �������" << endl;
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
		cout << "������� � ����������" << endl;
		break;
	case '4':
		cout << "������� � ����������" << endl;
		break;
	default:
		cout << "����� ������� ������������" << endl;
		return false;
		break;
	}
	system("pause");
	return 0;
}
