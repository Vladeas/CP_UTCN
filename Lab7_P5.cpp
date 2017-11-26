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


/*
>>> Use an array to keep track of the prime numbers(1), their multiple(2) and unchecked numbers(0)
#Input : n(Length of array), x(The array,(0 on all positions))
#Output : 0(If the length is to small), 1(Otherwise)
*/
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



/*
>>> Put 2 on the position of all numbers that are multiple of a given number n
#Input : n(Length of array), x(Array of positions), nr(the prime number whose multiples we search)
#Output : -
*/
void fill(int n, int x[],int nr)
{
	//Fill all the numbers that divide with the given prime number
	for (int i = 0; i < n; i++)
		if (x[i] == 0 && ((i % nr) == 0))
			x[i] = 2;
}


/*
>>> Check if a number is prime
#Input : nr(An integer number)
#Output : 0(The number is not prime), 1(The number is prime)
*/
int prim(int nr)
{
	for (int i = 3; i <= sqrt(nr); i++)
		if (nr % i == 0)
			return 0;
	return 1;
}
