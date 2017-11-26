/*
>>> Read from the keyboard 3 integer numbers (a, b and c). Determine the area of the rectangle that has
the sides equal to a and b and verify if the rectangle’s diagonal is equal to c.
*/

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int area(int a, int b);
int check(int a, int b, int c);

int main()
{
	int a, b, c;
	
	cout << "<<< Insert the two lenghts of the rectangle, and its diagonal :\n";
	cin >> a >> b >> c;
	
	cout << ">>> The area of the rectangle is " << area(a,b) << endl;
	
	if (check(a, b, c))
		cout << ">>> The given lenght is a diagonal\n";
	else 
		cout << ">>> The given lenght is not a diagonal\n";
	
	system("pause");
}


//The area of the rectangle
int area(int a, int b)
{
	return a*b;
}


//Check with Pythagoras formula if C can be diagonal
int check(int a, int b, int c)
{
	if (a*a + b*b == c*c)
		return 1;
	return 0;
}
