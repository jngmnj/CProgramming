#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 9-1. �����޸� �Ҵ� ���α׷�(���� Ȯ��)
void main()
{
	char* str[5];
	
	for (int i = 0; i < 5; i++) {
		if ((str[i] = (char*)malloc(128)) == NULL) { // malloc
			printf("�޸� �Ҵ� ����\n");
			exit(0); // ������ ����
		}
		printf("�޸� �Ҵ� ����, ���ڿ� [%d]�� �Է��Ͻÿ�. \n", i + 1);
		scanf("%s", &str[i]);
	}

	for (int i = 0; i < 5; i++) {
		free(str[i]);
	}
}