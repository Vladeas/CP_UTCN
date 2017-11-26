/*
>>> Write a program that reads n integer numbers from the keyboard and displays those that can be
divided by 3.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void odd(int n);

int main()
{
	int n;
	cout << "<<< Insert the number of terms : ";
	cin >> n;
	odd(n);
	system("pause");
	return 0;
}

void odd(int n)
{
	int x;
	if (n == 0)
		cout << endl;
	if (n != 0)
	{
		cin >> x;
		odd(n - 1);
		if (x % 3 == 0)
			cout << x << "  ";
	}
}
