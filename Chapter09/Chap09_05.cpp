#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 9-5. 문자열을 입력받아 문자 수와 단어 수를 산정하는 프로그램
void main()
{
	char* str;
	int c = 0, w = 0;
	str = (char*)malloc(100 * sizeof(char));
	
	if (str == NULL) {
		printf("메모리 할당 실패\n");
		exit(1);
	}

	// gets(str);
	fgets(str, 100, stdin); // sizeof(str)은 포인터 자체의 크기인 8바이트를 반환하기때문에 str의크기 명시
	str[strcspn(str, "\n")] = '\0'; // fgets는 개행 문자를 포함하므로 제거

	do {
		if (*str == ' ' || *str == '\t') { // str이 가리키는 문자가 NULL문자가 아닌 이상 반복
			w++; // 다음 문자 위치로 이동하면서 각 문자를 조사
		}
		c++;
	} while (*str++ != NULL);


	printf("\n\n문자 수= %d", c-1);
	printf("\n\n단어 수= %d", w+1);
	printf("%s", str);
}