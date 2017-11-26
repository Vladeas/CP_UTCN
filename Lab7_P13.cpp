/*
>>> Determine the least common multiple of 2 integer numbers read from the keyboard.
*/

#define CRT_SECURE_NO_WARNINGS


#include <iostream>
using namespace std;

int main() {
	int a, b, prod;
	cout << "<<< First number : ";
	cin >> a;
	cout << "<<< Second number : ";
	cin >> b;
	prod = a*b;
	while (a != b) 
	{
		if (a>b)
			a = a - b;
		else
			b = b - a;
	}
	cout << ">>> The least common multiple is : " << prod / a << endl;
	system("pause");
	return 0;
}
