#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int day;

	cout << "[1]�����������\n";
	cout << "[2]�������\n";
	cout << "[3]�����\n";
	cout << "[4]�������\n";
	cout << "[5]�������\n";
	cout << "[6]�������\n";
	cout << "[7]�����������\n";

	cout << "\n�������� ���� ������: ";
	cin >> day;

	switch (day)
	{
	case 1:
		cout << "���������";
		break;
	case 2:
		cout << "�����";
		break;
	case 3:
		cout << "��������";
		break;
	case 4:
		cout << "������� � �����������";
		break;
	case 5:
		cout << "�������� �� ��";
		break;
	case 6:
		cout << "�������� � ��������";
		break;
	case 7:
		cout << "�������� �������";
		break;
	}
	return 0;
}	