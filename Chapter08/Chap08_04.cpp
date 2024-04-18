#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 8-4. 파일을 만들고 데이터를 입력하는 프로그램
void main()
{
	FILE* fp;
	int ch;
	if ((fp = fopen("sample3.txt", "w+")) == NULL) {
		printf("파일을 열 수 없습니다. \n");
		exit(0);
	}
	
	for (ch = 65; ch <= 92; ch++) {
		putc(ch, fp);
	}

	fseek(fp, 8L, SEEK_SET); // 각각의 문자를 찾음(8문자를 건너뛰어 가리킴)
	ch = getc(fp);
	printf("9번째 문자는 %c \n", ch);
	ch = getc(fp);
	fseek(fp, 16L, SEEK_SET); // 각각의 문자를 찾음(16문자를 건너뛰어 가리킴)
	printf("17번째 문자는 %c \n", ch);

	fclose(fp);
	return;
} 