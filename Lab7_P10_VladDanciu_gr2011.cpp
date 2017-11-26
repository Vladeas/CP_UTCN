#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int count(int nr);

int main()
{
	int nr;
	cout << "<<< Insert Number : ";
	cin >> nr;
	cout << ">>> The result is : " << count(nr) << endl;
	system("pause");
}

int count(int nr)
{
	int ct = 0;
	while (nr != 0)
	{
		ct++;
		nr /= 10;
	}
	return ct;
}