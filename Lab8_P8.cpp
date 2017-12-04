#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
using namespace std;

int read(int x[], int n);
float average(int x[], int n);
void print(int x[], int n,int media);

void main(void)
{
	int i, n = 0, val, media;
	int x[100];

	n = read(x, n);

	media = average(x, n);
	print(x, n, media);
	_getch();
}


int read(int x[], int n)
{
	cin >> n;

	cout << "Introduceti elementele tabloului: \n";

	for (int i = 0; i < n; i++)
	{
		cout << "\tx[" <<  i << "] = ";
		cin >> x[i];
	}
	return n;
}

float average(int x[], int n)
{
	float med = 0, ct = 0;
	for (int i = 0; i < n; i++)
	{
		ct++;
		med += x[i];
	}
	if (ct == 0)
		return 0;
	return med / ct;
}

void print(int x[], int n, int media)
{
	for (int i = 0; i < n; i++)
		if (x[i] > media)
			cout << x[i] << "  ";
}
