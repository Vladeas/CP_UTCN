#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;


void upp(char x[]);


int main()
{
	char name[20], surname[20];
	cin.get(name, 20);
	cin.get();
	cin.get(surname, 20);
	upp(name);
	upp(surname);
	cout << name << "\t\t" << surname << endl;
	system("pause");
}

void upp(char x[])
{
	for (int i = 0; i < strlen(x); i++)
		x[i] = toupper(x[i]);
}
