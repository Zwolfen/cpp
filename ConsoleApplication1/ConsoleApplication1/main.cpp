#include<iostream>
using namespace std;
int main()
{
	int v1 = 0;
	int v2 = 0;
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");
	cout << "Hello World" << endl;
	cout << "������� ������ �����" << endl;
	cin >> v1;
	cout << "������� ������ �����" << endl;
	cin >> v2;
	// ������� 1.6 ��� �� ����� �������� �� ���� ��������: � ������ ��������� ���� ���������� ���������� ���������� v1 � v2.
	// ������ - ����� ����� ����� � �������, ����� ���������, ����������� ��������. ���� �������� ��������, ���� ������ ������ ����� � �������.
	cout << "������������ ����� " << v1 << " �� " << v2 << " ����� " << v1 * v2 << endl;
	
	//system("pause>nul");
	return 0;
}
