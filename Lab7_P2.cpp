/*
>>> Please verify if a natural number introduced from the keyboard is a perfect square or not.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a;
	cout << "<<< Insert a number :\n";
	cin >> a;
	if (sqrt(a) == int(sqrt(a))) // Check if the float value of sqrt is equal to its integer value
		cout << ">>> The number is a perfect square.\n";
	else
		cout << ">>> The number is not a perfect square.\n";
	system("pause");
}
