#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 9-1. 동적메모리 할당 프로그램(실행 확인)
void main()
{
	char* str[5];
	
	for (int i = 0; i < 5; i++) {
		if ((str[i] = (char*)malloc(128)) == NULL) { // malloc
			printf("메모리 할당 실패\n");
			exit(0); // 비정상 종료
		}
		printf("메모리 할당 성공, 문자열 [%d]를 입력하시오. \n", i + 1);
		scanf("%s", &str[i]);
	}

	for (int i = 0; i < 5; i++) {
		free(str[i]);
	}
}