#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 9-5. ���ڿ��� �Է¹޾� ���� ���� �ܾ� ���� �����ϴ� ���α׷�
void main()
{
	char* str;
	int c = 0, w = 0;
	str = (char*)malloc(100 * sizeof(char));
	
	if (str == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	// gets(str);
	fgets(str, 100, stdin); // sizeof(str)�� ������ ��ü�� ũ���� 8����Ʈ�� ��ȯ�ϱ⶧���� str��ũ�� ���
	str[strcspn(str, "\n")] = '\0'; // fgets�� ���� ���ڸ� �����ϹǷ� ����

	do {
		if (*str == ' ' || *str == '\t') { // str�� ����Ű�� ���ڰ� NULL���ڰ� �ƴ� �̻� �ݺ�
			w++; // ���� ���� ��ġ�� �̵��ϸ鼭 �� ���ڸ� ����
		}
		c++;
	} while (*str++ != NULL);


	printf("\n\n���� ��= %d", c-1);
	printf("\n\n�ܾ� ��= %d", w+1);
	printf("%s", str);
}