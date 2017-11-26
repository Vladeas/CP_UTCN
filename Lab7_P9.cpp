/*
>>> Write a program that determines the integer quotient of 2 integer numbers using a series of
subtractions.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int divide(int a, int b);

int main()
{
	int a, b, rez;
	cout << "<<< Insert first number : ";
	cin >> a;
	cout << "<<< Insert second number : ";
	cin >> b;
	rez = divide(a, b);
	if (rez == -1)
		cout << "Division by zero.\n";
	else
		cout << ">>> The result of  a/b is : "<< rez << endl;
	system("pause");
	return 0;
}

int divide(int a, int b)
{
	if (a < b)
		return 0;
	if (b == 0)
		return -1;
	int ct = 0;
	while (a - b >= 0)
	{
		a -= b;
		ct++;
	}
	return ct;
}
