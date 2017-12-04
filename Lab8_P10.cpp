#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


int read(int x[], int &n);
void div(int x[], int n,float y[],int count);


int main()
{
	int x[100], n, count;
	float y[100];
	count = read(x, n);
	div(x, n, y, count);
	system("pause");
}

int read(int x[], int &n)
{
	int ct = 0;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] >= 0)
			ct++;
	}
	return ct;
}

void div(int x[], int n, float y[], int count)
{
	for (int i = 0; i < n; i++)
		y[i] = x[i] % count;
	for (int i = 0; i < n; i++)
		cout << y[i] << "  ";
}
