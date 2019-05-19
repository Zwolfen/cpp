#include<iostream>
#include "Sales_item.h"

using namespace std;
int main()
{
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");


	cout << "ex 1.20" << endl;
	Sales_item item;
	// need to coment #include "version test.h" in Sales_item.h, else compile error

	// in while loop reading and out on console
	while (cin >> item) {
		cout << item << endl; // print their sum
	}

	cout << "ex 1.21" << endl;
	// need to coment #include "version test.h" in Sales_item.h, else compile error

	Sales_item item1, item2;
	cin >> item1 >> item2; // read a pair of transactions
	if (compareIsbn(item1, item2)) {
		cout << item1 + item2 << endl; // print their sum
	}

	cout << "ex 1.22" << endl;
	// need to coment #include "version test.h" in Sales_item.h, else compile error

	Sales_item sum, item3;
	// making first value to sum object
	cin >> sum;
	while (cin >> item3) {
		if (compareIsbn(sum, item3)) {
			sum += item3;
		}
	}
	cout << sum << endl; // print their sum
	//system("pause>nul");
	return 0;
}
