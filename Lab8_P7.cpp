#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void read(float x[10][10]);
void print(float x[10][10]);
float sum(float x[10][10],int col);
void sub(float x[10][10], int n);
void exchange(float x[10][10], int a, int b);


int main()
{
	float x[10][10];
	int n = 3;
	read(x);
	sub(x, n);
	system("pause");
}

void read(float x[10][10])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> x[i][j];
}

float sum(float x[10][10], int col)
{
	float sum = 0;
	for (int i = 0; i < 3; i++)
		sum += x[i][col];
	return sum;
}

void exchange(float x[10][10], int a, int b)
{
	float aux;
	for (int i = 0; i < 3; i++)
	{
		aux = x[i][a];
		x[i][a] = x[i][b];
		x[i][b] = aux;
	}
}

void sub(float x[10][10], int n)
{
	float y[10],aux;
	int i;
	for (i = 0; i < n; i++)
		y[i] = sum(x, i);
	for (i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (y[i] > y[j])
			{
				aux = y[i];
				y[i] = y[j];
				y[j] = aux;
				exchange(x,i,j);
			}
		}
	}
	print(x);
}

void print(float x[10][10])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << x[i][j] << "  ";
		cout << endl;
	}
}
