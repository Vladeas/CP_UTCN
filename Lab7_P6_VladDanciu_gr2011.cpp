#define CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

int main()
{
	int a, b, r;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	r = a%b;
	while (r)
	{
		a = b;
		b = r;
		r = a%b;
	}
	cout << "cmmdc: " << b << endl;
	system("pause");
	return 0;
}