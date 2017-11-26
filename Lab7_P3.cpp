/*
>>> Write a program that calculates a^n,
where a and n are read from the keyboard.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int power(int a, int n);

int main()
{
	int a=2,n;
	cout << "<<< Insert the power : ";
	cin >> n;
	cout << ">>> The power of a^n is " << power(a, n) << endl;
	system("pause");
}


/*
>>> Calculate a^n by using multiplication
#Input : a(The given integer number), n(Thr power of a)
#Output : p(a at power n)
*/
int power(int a, int n)
{
	int p = 1;
	for (int i = 0; i < n; i++)
		p *= a;
	return p;
}
