#include <stdio.h>
#define KILO 1.609

// ������ ��ȯ�ϴ� ���α׷�(mile to kilometer)
void main()
{
	float miles, kms;
	printf("\t input(miles) ==> ");
	scanf_s("%f", &miles);
	kms = KILO * miles; // 1 mile = 1.609 km
	printf("\t %f mile = %f km \n", miles, kms);

}