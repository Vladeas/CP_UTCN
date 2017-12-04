#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
using namespace std;


void password(char x[]);


int main()
{
	char x[20] = "Password";
	password(x);
	system("pause");
}

void password(char x[])
{
	char y[20];
	int count = 1;
	cin.get(y, 20);
	while (strcmp(x, y))
	{
		cin.get();
		cin.get(y, 20);
		count++;
	} 
	cout << endl << count << endl;
}
