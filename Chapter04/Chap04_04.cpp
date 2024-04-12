#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)

// 구구단을 7단분터 9단까지 세 줄로 출력하는 프로그램
void main()
{
	int i, j;

	for(i=7; i<10; i=i+3) // 7만 사용
		for (j = 1; j < 10; j++) {
			printf("\t %2d * %2d = %2d \t", i, j, i * j); // 최소 2자리 정수 우측정렬. 형식지정자.
			printf("\t %2d * %2d = %2d \t", i+1, j, (i+1) * j);
			printf("\t %2d * %2d = %2d \n", i+2, j, (i+2) * j);
		}
		getch(); // 프로그램 바로 종료하지 않고 사용자의 키입력을 기다림
		printf("\n");
}