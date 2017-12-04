#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


void read(int x[], int &n);
int min(int x[], int n);


int main()
{
	int x[100], n;
	read(x, n);
	cout << "Minimum = " << min(x, n) << endl;
	system("pause");
}

void read(int x[], int &n)
{
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i];
}

int min(int x[], int n)
{
	int min = -1;
	for (int i = 0; i < n; i++)
	{
		if (x[i] >= 0 && min == -1)
			min = x[i];
		else
			if (min > x[i] && x[i] >= 0)
				min = x[i];
	}
	return min;
}