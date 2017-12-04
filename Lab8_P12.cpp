#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;



void read(int x[100][100],int &n,int &m,int &c);
void secDiagonal(int x[100][100],int n);
void sum(int x[100][100], int n, int c);

int main()
{
	int x[100][100],n,m,c;
	read(x,n,m,c);
	system("pause");
}


void read(int x[100][100], int &n, int &m, int &c)
{
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "x[" << i << "][" << j << "] = ";
			cin >> x[i][j];
		}
	if (m == n)
		secDiagonal(x,n);
	else
	{
		cout << "c";
		cin >> c;
		sum(x, n, c);
	}
}

void secDiagonal(int x[100][100], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i + j == n + 1)
				cout << x[i][j];
}

void sum(int x[100][100], int n, int c)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += x[i][c];
	cout << endl << sum << endl;
}
