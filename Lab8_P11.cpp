#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
using namespace std;

void strings(char x[], char y[]);

int main()
{
	char x[50],y[50];
	cin.get(x,50);
	_strrev(x);
	strings(x, y);
	system("pause");
}

void strings(char x[], char y[])
{
	char aux[50];
	strcpy(y,"");
	strcpy(aux, x);
	for (int i = 0; i < strlen(x); i += 2)
	{
		strncat(y, aux, 1);
		strcpy(aux, aux + 2);
	}
	cout << endl << x;
	cout << endl << y << endl;
}
