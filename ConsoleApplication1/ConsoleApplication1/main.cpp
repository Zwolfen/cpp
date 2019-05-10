#include<iostream>
using namespace std;
int main()
{
	int v1 = 0;
	int v2 = 0;
	int i = 51;
	int sum = 0;
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");

	cout << "ex 1.12" << endl;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	//суммирование всех чисел в диапазоне от -99 до 100

	cout << "ex 1.13" << endl;

	for (int i = 50; i <= 100; i++) {
		sum += i;
	}
	cout << "—умма чисел от 50 до 100 равна " << sum << endl << endl;\

		cout << "ex 1.13" << endl;
	i = 10;
	for (int i = 10; i >= 0; i--) {
		cout << i << " ";
	}
	// задача подразумевает что нам известен только цикл for без способов остановки

	cout << endl << endl << "ex 1.13" << endl;
	cout << "¬ведите первое число" << endl;
	cin >> v1;
	cout << "¬ведите второе число" << endl;
	cin >> v2;
	for (int i = v1 - v2 - 1; i > 0; i--) {
		cout << ++v2 << " ";
	}
	cout << endl << endl;
	for (int i = v2 - v1 - 1; i > 0; i--) {
		cout << ++v1 << " ";
	}

	cout << endl << endl << "ex 1.14" << endl;
	cout << "Obvious while and for doing same things and could replace each other. But one difference: use for loop when know how many iterations will be and while loop when don't know" << endl;

	cout << endl << endl << "ex 1.15" << endl;
	cout << "// error: missing ) in parameter list for main" << endl;
	cout << "int main({" << endl;
	cout << "// error: used colon, not a semicolon, after endl" << endl;
	cout << "std::cout << \"Read each file.\" << std::endl:" << endl;
	cout << "// error: missing quotes around string literal" << endl;
	cout << "std::cout << Update master. << std::endl;" << endl;
	cout << "// error: second output operator is missing" << endl;
	cout << "std::cout << \"Write new master.\" std::endl;" << endl;
	cout << "// error: missing ; on return statement" << endl;
	cout << "return 0" << endl;
	cout << "}" << endl;

	//system("pause>nul");
	return 0;
}
