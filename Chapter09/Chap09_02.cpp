#include <stdio.h>
#include <stdlib.h>

// 9-2. ���ڿ��� �Է¹޾� �� ���ڸ� ���ĺ� ������ �����ϴ� ���α׷�
void main()
{
	char temp, * str;
	int i, j, k;
	str = (char*)malloc(128 * sizeof(char));

	if (str == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	for (i = 0; (*str++ = getchar()) != '\n'; i++); // Ű����κ��� 1���ڸ� �Է¹޾� *str�� �����ϰ� �������� ��ġ�� �̵�
	
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