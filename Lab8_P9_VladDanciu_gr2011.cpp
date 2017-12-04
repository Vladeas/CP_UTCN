#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


void read(int x[],int &n);


int main()
{
	int x[100],n;
	read(x,n);
	system("pause");
}

void read(int x[], int &n)
{
	int count = 0, y[100];
	cout << "n = "; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] % 2 != 0 && x[i] < 0)
		{
			y[count] = x[i];
			count++;
		}
	}
	for (int i = 0; i < count; i++)
		cout << y[i] << "  ";
	cout << endl << count << endl;
}