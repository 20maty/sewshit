#include <stdio.h>
#include <conio.h>
#include <math.h> 

// Funktionen definieren
int fac(int n);
double meincosinus(double x);



void main() {
	double x;
	double y;
	int i;

	printf("geben sie eine zahl ein\n");

	scanf_s("%lf", &x);

	y = meincosinus(x);

	printf_s("cos(%lf)=%lf\n", x, y);

	x = x * (180.0 / 3.14159);
	y = cos(x);

	printf_s("cos(%lf)=%lf\n", x, y);

	scanf_s("%d", &i);
	printf_s("%d\n", i);

	_getch();
}

int fac(int n) {
	int prod = 1;
	int i;

	for (i = 1; i <= n; i++)
	{
		prod *= i;
	}

	return prod;
}

double meincosinus(double x)
{

	double erg = 0;
	int n;

	for (n = 0; n <= x; n++)
	{
		x = fac(n);
		erg += pow(-1, n) * pow(x, (2 * n)) / fac(2 * n);

	}

	return erg;

}
