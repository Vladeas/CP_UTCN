#define _CRT_SECURE_NO_WARNINGS
#define DIM 100

#include <cstdio>
#include <conio.h>

int read(int x[], int dim);
float medPoz(int x[], int dim);
float medNeg(int x[], int dim);

void main(void)
{
	int i, dim = 0, val, poz;
	int x[DIM];

	dim = read(x, dim);
	
	printf("\n Pozitive mean value : %.3f", medPoz(x,dim));
	printf("\n Negative mean value : %.3f", medNeg(x,dim));

	_getch();
}


int read(int x[], int dim)
{
	//Read the dimension of the array an its elements
	do
	{
		printf("\nIntroduceti dimensiunea tabloului( <= %d): ", DIM);
		scanf("%d", &dim);
	} while (dim > DIM);

	printf("\n Introduceti elementele tabloului:\n");

	for (int i = 0; i<dim; i++)
	{
		printf("\tx[%d] = ", i);
		scanf("%d", &x[i]);
	}
	return dim;
}

float medPoz(int x[], int dim)
{
	//Mean arithmetic value of Pozitive elements
	float med = 0, ct = 0;
	for (int i = 0;i<dim;i++)
		if (x[i] >= 0)
		{
			ct++;
			med += x[i];
		}

	if (ct == 0)
		return 0;
	return med / ct;
}

float medNeg(int x[], int dim)
{
	//Mean arithmetic value of Negative elements
	float med = 0, ct = 0;
	for (int i = 0; i<dim; i++)
		if (x[i] < 0)
		{
			ct++;
			med += x[i];
		}

	if (ct == 0)
		return 0;
	return med / ct;
}