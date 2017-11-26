#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
	int n;
	cout << "<<< Insert a number n :";
	cin >> n;
	cout << ">>> n! is " << factorial(n) << endl;
	system("pause");
}

int factorial(int n)
{
	int rez = 1;
	for (int i = 1; i <= n; i++)
		rez *= i;
	return rez;
}