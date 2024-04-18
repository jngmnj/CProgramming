#include <stdio.h>
#include <stdlib.h>

// 9-2. 문자열을 입력받아 각 문자를 알파벳 순으로 정렬하는 프로그램
void main()
{
	char temp, * str;
	int i, j, k;
	str = (char*)malloc(128 * sizeof(char));

	if (str == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; (*str++ = getchar()) != '\n'; i++); // 키보드로부터 1문자를 입력받아 *str에 대입하고 다음문자 위치로 이동
	
	*str = '\0';
	str -= i + 1;

	for(j=1; j<i; j++)
		for(k=1; k<i; i++)
			if (*(str + k) < *(str + k - 1)) {
				temp = *(str + k);
				*(str + k) = *(str + k - 1);
				*(str + k - 1) = temp;
			}
	
	printf("\n%s", str);

	free(str);
}