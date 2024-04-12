#include <stdio.h>	// 표준입출력함수의 원형을 갖고 있는 헤더파일
#include <math.h>	// 수학관련 함수의 원형을 갖고 있는 헤더파일
#pragma warning(disable:4996)

// 5-1. sine, cosine, tangent 값을 출력하는 프로그램(-1에서 1까지)
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