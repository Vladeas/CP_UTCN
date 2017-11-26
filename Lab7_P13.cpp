/*
>>> Determine the least common multiple of 2 integer numbers read from the keyboard.
*/

#define CRT_SECURE_NO_WARNINGS


#include <iostream>
using namespace std;

int cmmmc(int a,int b);

int main() {
	int a, b;
	cout << "<<< First number : ";
	cin >> a;
	cout << "<<< Second number : ";
	cin >> b;
	cout << ">>> The least common multiple is : " << cmmmc(a,b) << endl;
	system("pause");
	return 0;
}


/*
>>> Solve the problem by using the formul a*b = cmmdc(a,b)*cmmmc(a,b)
#Input : a,b(Two integer numbers)
#Output : cmmmc(Of a and b)
*/
int cmmmc(int a,int b)
{
	int prod;
	prod = a*b;
	while (a != b)	//calculate cmmdc of a and b
	{
		if (a>b)
			a = a - b;
		else
			b = b - a;
	}
	return prod / a;
}
