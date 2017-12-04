#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void read(int x[]);

int main()
{
	int x[12];
	read(x);
	for (int i = 0; i < 10; i++)
	{
		cout << x[i] << "  ";
	}
	system("pause");
}


void read(int x[])
{
	int nr, l = 0, j;
	for (int i = 0; i < 9; i++)
	{
		cin >> nr;

		for (j = 0; j < l && nr > x[j]; j++);

		for (int k = l; k >= j; k--)
			x[k + 1] = x[k];
		l++;
		x[j] = nr;
	}
}