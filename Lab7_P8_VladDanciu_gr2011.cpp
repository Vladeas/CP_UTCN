#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int product(int a, int b);

int main()
{
	int a, b;
	cout << "<<< Insert the first number : ";
	cin >> a;
	cout << "<<< Insert the second number : ";
	cin >> b;
	cout << ">>> The product of the numbers is : " << product(a, b) << endl;
	system("pause");
	return 0;
}


int product(int a, int b)
{
	if (a == 1)
		return b;
	if (b == 1)
		return a;
	int s = 0;
	for (int i = 0; i < b; i++)
		s += a;
	return a;
}