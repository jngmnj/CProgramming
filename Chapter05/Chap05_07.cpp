#include <stdio.h>	
#include <ctype.h>	// ������ ���¸� �Ǻ��ϴ� �Լ��� ������ ���� �ִ� ��� ����
#pragma warning(disable:4996)

// 5-7. �ԷµǴ� �ҹ��ڸ� �빮�ڷ�, �빮�ڸ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷�
void main()
{
	char ch, ch1, ch2;
	printf("���ڸ� �Է��Ͻÿ�. \n");
	ch = getchar();
	if (isupper(ch)) {
		printf("%c is a uppercase \n", ch);
		ch1 = tolower(ch);
		printf("%c is a lowercase \n", ch1);
	} 
	else if(islower(ch)) {
		printf("%c is a lowercase \n", ch);
		ch2 = toupper(ch);
		printf("%c is a uppercase \n", ch2);
	}
	else
		printf("%c is not alpha character \n", ch);
}