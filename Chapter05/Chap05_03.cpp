#include <stdio.h>	
#include <stdlib.h>	
#pragma warning(disable:4996)

// 5-3. 입력된 수를 seed값으로 하여 난수를 구하는 프로그램
void main()
{
	int number;
	printf("input number:");
	scanf("%d", &number);
	srand(number); // srand(): 난수 발생 함수의 난수 발생 시작 값 seed를 설정하는 함수
	for (int i = 0; i < 5; i++)
		printf("%d \n", rand()); // rand(): 0에서 32767사이의 연속적인 난수 제공 함수
}