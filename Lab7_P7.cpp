/*
>>> Write a program that determines all the divisors of a value introduced from the KBD
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
	int nr;
	cout << "<<< Insert number : ";
	cin >> nr;
	for (int i = 1; i <= nr / 2; i++)
		if (nr%i == 0)
			cout << i << "   ";
	cout << nr << endl;
	system("pause");
}
