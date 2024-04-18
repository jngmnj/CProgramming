#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 9-4. 문자열을 입력받아 단어를 역으로 출력하는 프로그램
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
		if (str[i] == ' ') { // 공백문자가 나오면 다음문자부터 '\0'문자가 나올때까지 출력
			printf("%s ", &str[i + 1]); 
			str[i] = '\0';
		}		
	}

	printf("%s", &str[0]);
	free(str);
}