#include<iostream>
//#include"Header.h"

using namespace std;

int glob = 10;

int main()
{
	
	//setlocale(LC_CTYPE, "rus");
	system("chcp 1251>nul");
	//cout << glob;
	/*
	Exercises Section 2.2.1
		Exercise 2.9: Explain the following definitions.For those that are illegal,
		explain what’s wrongand how to correct it.
	(a)std::cin >> int input_value;
	(b) int i = { 3.14 };
	(c) double salary = wage = 9999.99;
	(d) int i = 3.14;
	Exercise 2.10: What are the initial values, if any, of each of the following
		variables ?

	Answers:
	a) it is unaceptable to use type definition after cin.cin wait for object.
	b) value is a some more than just double and can not be placed in int type.
	c) first "=" means salary take value of wage, but wage is not defined yet.
	d) variable i will take value 3, because of its int type. non-int part will be dropped.
	*/


	/*
	Exercises Section 2.2.2
	Exercise 2.11: Explain whether each of the following is a declaration or a
	definition:
	(a) extern int ix = 1024;
	(b) int iy;
	(c) extern int iz;

	Answers:
	a) its a definition, ix is declared and defined with value 1024;
	b) its a declaration iy declared but not defined
	c) its a declaration iy is declared but not defined.
	*/


	/*
	Exercises Section 2.2.3
	Exercise 2.12: Which, if any, of the following names are invalid ?
	(a) int double = 3.14;
	(b) int _;
	(c) int catch - 22;
	(d) int 1_or_2 = 1;
	(e) double Double = 3.14;

	Answers:
	a) invalid. double is a reserved name for type
	b) invalid. var name must begin from digit or lowercase char
	c) invalid. no equal char but a arifmetic operation;
	d) invalid. variable start with digit;
	e) invalid. var must begin from lowercase char.
	*/
	 

	/*
	Exercises Section 2.2.4
	Exercise 2.13: What is the value of j in the following program?
	int i = 42;
	int main()
	{
	int i = 100;
	int j = i;
	}

	Answers:
	value of j is 100 but only within bracers
	*/


	/*
	Exercise 2.14: Is the following program legal? If so, what values are printed?
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)
	sum += i;
	std::cout << i << " " << sum << std::endl;

	Answers:
	i=100, sum=45
	*/


	/*
	exercises section 2.3.1
	exercise 2.15: which of the following definitions, if any, are invalid ? why ?
	(a) int ival = 1.01;
	(b) int &rval1 = 1.01;
	(c) int &rval2 = ival;
	(d) int &rval3;

	Answers:
	a) valid
	b) invalid, object of defenition must be object;
	c) valid
	d) invalid, no obect given for alias
	*/


	/*
	exercise 2.16: which, if any, of the following assignments are invalid ? if
	they are valid, explain what they do.
	int i = 0, &r1 = i; double d = 0, &r2 = d;
	(a)r2 = 3.14159;
	(b)r2 = r1;
	(c)i = r2;
	(d)r1 = d;

	Answers:
	a) valid. define int variable i and its alias &r1, define double variable d and its alias &r2
	b) r2 is alias and cant be redefined
	c) r2 is alias and cant be used as value for i
	d) r1 is alias and cant be used as value for
	*/
	
	/*
	exercise 2.17: what does the following code print ?
	int i, &ri = i;
	i = 5; ri = 10;
	std::cout << i << " " << ri << std::endl;

	Answers:
	ri is alias for i
	when ri is defined with value 10 then for real i is defined with value 10
	10 10
	*/


	/*
	exercises section 2.3.2
	exercise 2.18: write code to change the value of a pointer.write code to
	change the value to which the pointer points.

	Answers:
	*/
	/*
	int i = 100;
	int &ival = i;
	int* p = &ival;
	cout << *p << endl;
	*p = *p + *p;
	cout << i << endl;
	*/



	/*
	exercise 2.19 : explain the key differences between pointers and references.

	Answers :
	Reference is not a object and can be refered only to one var during program. pointer it is an object, it can be operated like object and can point in diferent vars in diferent time.
	*/


	/*
	exercise 2.20 : what does the following program do ?
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;

	Answers:
	it will make i*i and i var will change value to 1764
	*/


	/*
	exercise 2.21: explain each of the following definitions.indicate whether
	any are illegal and, if so, why.
	int i = 0;
	(a) double *dp = &i;
	(b) int *ip = i;
	(c) int *p = &i;

	Answers:
	a) illegal. type of the pointer dp not same as i
	b) legal.
	c) legal.
	*/


	/*
	exercise 2.22: assuming p is a pointer to int, explain the following code :
	if (p) // ...
	if (*p) // ...

	Answers :
	1) if (p) - condition - its address in memory.
	2) if (*p) - condition - its value of var that pointer points.
	*/


	/*
	exercise 2.23 : given a pointer p, can you determine whether p points to a
	valid object ? if so, how ? if not, why not?

	Answers :
	we can cout p and check if it not nullptr, that means that pointer has a valid object. but we cant find out a type of object.
	*/


	/*
	exercise 2.24 : why is the initialization of p legal but that of lp illegal ?
	click here to view code image
	int i = 42; void *p = &i; long *lp = &i;

	Answers :
	void type means that pointer can point on any type object. lp has type long but try point to int var.
	*/


	/*
	Exercises Section 2.3.3
	Exercise 2.25: Determine the types and values of each of the following variables.
	(a) int *ip, &r = ip;
	(b) int i, *ip = 0;
	(c) int *ip, ip2;

	Answers:
	a) *ip - int pointer uninitalized, &r - reference to int pointer ip
	b) i - int variable, *ip - int pointer which points to null
	c) *ip - int pointer uninitalized, ip2 - int variable
	*/


	/*
	Exercises Section 2.4
	Exercise 2.26: Which of the following are legal ? For those that are illegal,
	explain why.
	(a) const int buf;
	(b) int cnt = 0;
	(c) const int sz = cnt;
	(d) ++cnt; ++sz;

	Answers:
	a) legal
	b) legal
	c) legal
	d) illegal. ++cnt is ok - its variable. ++sz - not ok, its constant value and cannot be changed.(try to change const type object)
	*/


	/*
	Exercises Section 2.4.2
	Exercise 2.27: Which of the following initializations are legal? Explain why.
	(a) int i = -1, &r = 0;
	(b) int *const p2 = &i2;
	(c) const int i = -1, &r = 0;
	(d) const int *const p3 = &i2;
	(e) const int *p1 = &i2;
	(f) const int &const r2;
	(g) const int i2 = i, &r = i;

	Answers:
	a) illegal. &r is reference to a const value but dont have const type.
	b) legal. const pointer can point on reference &i2
	c) legal. values are const;
	d) legal. same as b
	e) legal. same as b
	f) illegal. for const reference it must be initialized
	g) legal. i2 is const int that initialized from i, &r - const int reference that initialized from i
	*/


	/*
	Exercise 2.28: Explain the following definitions. Identify any that are illegal.
	(a) int i, *const cp;
	(b) int *p1, *const p2;
	(c) const int ic, &r = ic;
	(d) const int *const p3;
	(e) const int *p;

	Answers:
	a) illegal. i - int variable - ok, int *const cp - constant pointer - need initialization
	b) illegal. int *p1 - ok, int *const p2 - constant pointer - need initialization
	c) illegal. const int ic - need initialization, &r - ok if ic would have initialization
	d) illegal. const need initialization
	e) legal can point any const object
	*/


	/*
	Exercise 2.29: Using the variables in the previous exercise, which of the
	following assignments are legal? Explain why.
	(a) i = ic;
	(b) p1 = p3;
	(c) p1 = &ic;
	(d) p3 = &ic;
	(e) p2 = p1;
	(f)	ic = *p3;

	Answers:
	a) legal. i - int variable take value from const int ic
	b) illegal. non const pointer can't point on const object
	c) illegal. same as b
	d) illegal. unable to define const it can be only initialized
	e) illegal. unable to define const it can be only initialized
	f) illegal. unable to define const it can be only initialized
	*/


	/*
	Exercises Section 2.4.3
	Exercise 2.30: For each of the following declarations indicate whether the
	object being declared has top-level or low-level const.
	const int v2 = 0; int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;

	Answers:
	top-level const v2, low level const p2, low and top level const p3
	*/

	/*
	Exercise 2.31: Given the declarations in the previous exercise determine
	whether the following assignments are legal. Explain how the top-level or
	low-level const applies in each case.
	r1 = v2;
	p1 = p2; p2 = p1;
	p1 = p3; p2 = p3;

	Answers:
	1) r1 has no level, v2 has top-level - can be assigned
	2) p1 has no level and cant point on low-level p2. p2 has low-level and can point on no-level p1
	3) p1 has no level and cant point on low-level p3. p2 has low-level and can point on low-level p3
	*/

	
#pragma mark - Exercises Section 2.4.4
	/*
	Exercise 2.32: Is the following code legal or not? If not, how might you
	make it legal?
	int null = 0, *p = null;

	Answers:
	int variable cannot be initialized with any type variable.
	const int null = 0;
	int *p = null;
	making null const int and then initialize pointer.
	*/


	/*
	*/

	return 0;
}
