#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 9-4. ���ڿ��� �Է¹޾� �ܾ ������ ����ϴ� ���α׷�
void main()
{
	int maxlen, len, i;
	char* str;

	printf("input length of max string: ");
	scanf("%d", &maxlen);
	getchar();
	str = (char*)malloc((maxlen + 1) * sizeof(char));

	printf("string input: ");
	fgets(str, maxlen + 1, stdin);

	len = strlen(str);

	for (i = len; i >= 0; i--) {
		if (str[i] == ' ') { // ���鹮�ڰ� ������ �������ں��� '\0'���ڰ� ���ö����� ���
			printf("%s ", &str[i + 1]); 
			str[i] = '\0';
		}		
	}

	printf("%s", &str[0]);
	free(str);
}