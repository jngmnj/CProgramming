#include <stdio.h>

// �Էµ� �������� �ҹ��� ���θ� �Ǻ��ϴ� ���α׷�
void main()
{
	char ch;
	int j;

	printf("���ڸ� �Է��Ͻÿ�. \n");
	scanf_s("%c", &ch, 1); // 3��° �Ű����� �޸� ũ�� ���
	j = (ch >= 'a' && ch <= 'z'); // a���� z�ȿ� �ִ°� = �ҹ����ΰ� T=1, F=0

	printf("����� %d \n", j);
}