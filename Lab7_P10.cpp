/*
>>> Write a program that determines the number of figures that 
compose an integer number read from the keyboard.
*/

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
	return 0;
}


/*
>>> Increase Counter at every loop until the number is zero
#Input : nr(a given integer number)
#Output : ct(the number of figures that compose the number)
*/
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
