/*
>>> Write a program that reads from the keyboard an integer value n, and calculates n! (n-factorial).
*/

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


/*
>>> Calculate the factorial value of n
#Input : n(A given integer number)
#Output : rez(Factorial value of n)
*/
int factorial(int n)
{
	int rez = 1;
	for (int i = 1; i <= n; i++)
		rez *= i;
	return rez;
}
