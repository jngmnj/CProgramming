#include <stdio.h>	
#pragma warning(disable:4996)
unsigned fibonacci(void);

// 5-10. 피보나치 수열을 출력하는 프로그램
void main()
{
	// int k;
	printf("k | fibonacci \n");
	printf("*******************\n");
	for (int k = 1; k <= 10; k++)
		printf("%2d | %6u\n", k, fibonacci());
}

unsigned fibonacci(void) 
{
	static unsigned f = 0, pre_f = 1;
	
	unsigned re;
	re = f;
	f += pre_f;
	pre_f = re;
	return re;
}