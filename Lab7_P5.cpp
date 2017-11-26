/*
>>> Write a program that:
	- determines the greatest prime number that’s smaller than a certain given number;
	- determines all the prime numbers smaller than a given number;
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
using namespace std;

int lenght(int n,int x[]);
void fill(int n, int x[], int nr);
int prim(int nr);

int main()
{
	int n, x[200] = {0}, p;
	cout << "<<< Insert a number : ";
	cin >> n;
	if (lenght(n, x) == 0)
		cout << ">>> The given lenght is too small.\n";
	else
	{
		for (int i = 0; i < n; i++)
			if (x[i] == 1)
			{
				cout << i << "  ";
				p = i;
			}
		cout << "\n>>> The biggest prime number smaller then n is : " << p << endl;
	}
	system("pause");
}

int lenght(int n, int x[])
{
	if (n <= 2)
		return 0;
	x[2] = 1;
	fill(n, x, 2);
	for (int i = 3; i < n; i++)
		if (x[i] == 0 && prim(i))
		{
			x[i] = 1;
			fill(n, x, i);
		}
	return 1;
}

void fill(int n, int x[],int nr)
{
	//Fill all the numbers that divide with the given prime number
	for (int i = 0; i < n; i++)
		if (x[i] == 0 && ((i % nr) == 0))
			x[i] = 2;
}

int prim(int nr)
{
	for (int i = 3; i <= sqrt(nr); i++)
		if (nr % i == 0)
			return 0;
	return 1;
}
