#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 8-4. ������ ����� �����͸� �Է��ϴ� ���α׷�
void main()
{
	FILE* fp;
	int ch;
	if ((fp = fopen("sample3.txt", "w+")) == NULL) {
		printf("������ �� �� �����ϴ�. \n");
		exit(0);
	}
	
	for (ch = 65; ch <= 92; ch++) {
		putc(ch, fp);
	}

	fseek(fp, 8L, SEEK_SET); // ������ ���ڸ� ã��(8���ڸ� �ǳʶپ� ����Ŵ)
	ch = getc(fp);
	printf("9��° ���ڴ� %c \n", ch);
	ch = getc(fp);
	fseek(fp, 16L, SEEK_SET); // ������ ���ڸ� ã��(16���ڸ� �ǳʶپ� ����Ŵ)
	printf("17��° ���ڴ� %c \n", ch);

	fclose(fp);
	return;
} 