#include <stdio.h>
#pragma warning(disable:4996)

// 6-11. �ҹ��ڷ� �� ���ڿ��� �빮�ڷ� ��ȯ�ϴ� ���α׷�
void main()
{
	char arr[] = "programming";
	char *ptr;
	int bigchar;
	ptr = arr; // ������ ������ �迭�� �����ּ� ġȯ
	
	printf("before: %s \n\n", arr);
	printf("after: ");

	while (*ptr) {
		bigchar = *ptr - 32; // ASCII �빮�� ��ȯ
		printf("%c", bigchar);
		ptr++;
	}
	printf("\n");
}