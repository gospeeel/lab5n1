#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI            3.14159265358979323846




void main()
{
	setlocale(LC_ALL, "RUS");

	double gr, Gr;

	printf("������� �������� ���������� gr:\n");
	scanf("%lf", &gr);
	printf("gr = %lf\n\n", gr);

	Gr = gr;

	gr = gr * M_PI / 180;
	printf("gr � �������� = %lf\n\n", gr);

	gr = sin(gr);
	printf("sin %.0lf = %lf\n", Gr, gr);
	
}






