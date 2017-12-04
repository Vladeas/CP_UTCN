#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

void read(int x[100][100], int n, int m);
void evenPos(int x[100][100], int n,int m);
void oddSum(int x[100][100], int n, int m);
void matrixSum(int x[100][100],int y[100][100], int n, int c);

int main()
{
	int x[100][100], y[100][100], n, m;
	cout << "Lines = ";
	cin >> n;
	cout << "Columns = ";
	cin >> m;
	read(x, n, m);
	read(y, n, m);
	evenPos(x, n, m);
	evenPos(y, n, m);
	oddSum(x, n, m);
	oddSum(y, n, m);
	matrixSum(x, y, n, m);
	system("pause");
}


void read(int x[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "matrice_generica[" << i << "][" << j << "] = ";
			cin >> x[i][j];
		}
}

void evenPos(int x[100][100], int n, int m)
{
	cout << "Position of even elements " << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (x[i][j] % 2 == 0)
				cout << i << "<>" << j << "\t";
	cout << endl;
}

void oddSum(int x[100][100], int n, int m)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (x[i][j] % 2 != 0)
				sum += x[i][j];
	cout << "Sum of odd elements = "<< sum << endl;
}

void matrixSum(int x[100][100],int y[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			x[i][j] += y[i][j];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << x[i][j] << "  ";
		cout << endl;
	}
}
