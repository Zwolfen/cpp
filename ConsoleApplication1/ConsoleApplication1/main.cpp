#include<iostream>
using namespace std;
int main()
{
	int value;
	int i;
	int sum = 0;
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");

	cout << "ex 1.16" << endl;
	while (std::cin >> value)
		sum += value;
	cout << "Sum is: " << sum << endl;

	//system("pause>nul");
	return 0;
}
