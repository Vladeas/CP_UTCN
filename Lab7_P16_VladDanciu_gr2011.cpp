#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
using namespace std;

void print();

int main()
{
	print();
	
	system("pause");
	return 0;
}

void print()
{
	int x, esc, ct = 0, sum = 0;
	do
	{
		cin >> x;
		if (x >= 0 && x % 2 != 0)
		{
			ct++;
			sum += x;
		}
		esc = _getch();
	} while (!(esc == 27));
	cout << sum / ct << endl;
}