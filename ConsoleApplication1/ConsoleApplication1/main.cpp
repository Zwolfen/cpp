#include<iostream>
using namespace std;
int main()
{
	int v1 = 0;
	int v2 = 0;
	int i = 51;
	int sum = 50;
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");
	cout << "ex 1.9" << endl;
	while (i <= 100) {
		sum = sum + i;
		i++;
	}
	cout << "����� ����� �� 50 �� 100 ����� " << sum << endl << endl;
	cout << "ex 1.10" << endl;
	i = 10;
	while (i >= 0) {
		cout << i << " ";
		i--;
	}
	// ������ ������������� ��� ��� �������� ������ ���� while ��� �������� ��������� � �.�.
	cout << endl << endl << "ex 1.11" << endl;
	cout << "������� ������ �����" << endl;
	cin >> v1;
	cout << "������� ������ �����" << endl;
	cin >> v2;
	while (v1 > v2) {
		while (v1 > (v2 + 1))
			cout << ++v2 << " ";
		v2 = v1;
	}
	cout << endl << endl;
	while (v1 < v2) {
		while ((v1+1) < v2)
		cout << ++v1 << " ";
		v1 = v2;
	}


	//system("pause>nul");
	return 0;
}
