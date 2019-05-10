#include<iostream>
using namespace std;
int main()
{
	int value;
	int i;
	int sum = 0;
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");

	cout << "ex 1.17 1.18 1.19" << endl;
	// if all values are equal then get message like 'value' occurs 'n' times after eof character
	// if no equal values then get message like "'value' occurs '1' times" for each value after eof character
	int currVal = 0, val = 0;
	// read first number and ensure that we have data to process
	if (std::cin >> currVal) {
		int cnt = 1; // store the count for the current value we're processing
		while (std::cin >> val) { // read the remaining numbers
			if (val == currVal) // if the values are the same
				++cnt; // add 1 to cnt
			else { // otherwise, print the count for the previous value
				std::cout << currVal << " occurs "
					<< cnt << " times" << std::endl;
				currVal = val; // remember the new value
				cnt = 1; // reset the counter
			}
		} // while loop ends here
		// remember to print the count for the last value in the file
		std::cout << currVal << " occurs "
			<< cnt << " times" << std::endl;
	} // outermost if statement ends here

	//system("pause>nul");
	return 0;
}
