#include <stdio.h>
#include <conio.h> // getche(), putch()
#include <ctype.h> //isupper()
#pragma warning(disable:4996)

// 6-12. ���ڿ�(�빮��)�� �Է¹޾� ��ȣȭ�ϴ� ���α׷�
void main()
{
	char code[] = "5js7un9poqrwx3zadthec4kmv";
	char ch[100];
	int i = 0;

	// �ʱ�ȭ, ���й� ���� ���Ǹ� ������ ����.
	// getch()�Լ��� �ֿܼ��� �� ���ڸ� �ϰ� ch�迭��[i]��° ��ҿ� �����Ѵ�. 
	// enterŰ ������������ �ݺ�
	for (; (ch[i] = getche()) != '\r';) 
		if (isupper(ch[i]))
			ch[i++] = code[ch[i] - 65]; // 0���ͽ����ϴ� �迭�ε����� ��ȯ
		else
			i++;
	ch[i] = '\0';
	printf("\n\n");

	for (i = 0; ch[i] != '\0'; i++)
		putch(ch[i]);

}