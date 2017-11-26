#define CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <conio.h>

void sum(int n);

int main()
{
	int n;
	printf("<<< Insert n: ");
	scanf_s("%d",&n);
	sum(n);
	_getch();
}

void sum(int n)
{
	float sum = 0, x;
	int ct = 0;
	while (sum < n)
	{
		scanf_s("%f", &x);
		sum += x;
		ct++;
	}
	printf(">>> The sum is %.2f, there were used %d numbers.", sum, ct);
}