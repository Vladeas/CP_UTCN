#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a;
	cout << "<<< Insert a number :\n";
	cin >> a;
	if (sqrt(a) == int(sqrt(a)))
		cout << ">>> The number is a perfect square.\n";
	else
		cout << ">>> The number is not a perfect square.\n";
	system("pause");
}