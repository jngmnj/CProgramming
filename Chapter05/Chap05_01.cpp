#include <stdio.h>	// ǥ��������Լ��� ������ ���� �ִ� �������
#include <math.h>	// ���а��� �Լ��� ������ ���� �ִ� �������
#pragma warning(disable:4996)

// 5-1. sine, cosine, tangent ���� ����ϴ� ���α׷�(-1���� 1����)
void main()
{
	double val = -1.0;
	do {
		printf("sine of %f is %f \n", val, sin(val));
		printf("cosine of %f is %f \n", val, cos(val));
		printf("tangent of %f is %f \n\n", val, tan(val));
		val++;
	} while (val <= 1.0);
}