#include <stdio.h>

// �Էµ� ������ ¦���� Ȧ�� �Ǻ� ���α׷�
void main()
{
	int i;
	printf("������ �Է��Ͻÿ�.");
	scanf_s("%d", &i);
	printf("%s \n", (i % 2) ? "Ȧ��" : "¦��");
}