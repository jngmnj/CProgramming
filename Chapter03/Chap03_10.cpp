#include <stdio.h>

// �Էµ� �� ���� �� ū ���� ����ϴ� ���α׷�
void main()
{
	int a, b, c;
	printf("ù��° ���ڸ� �Է��Ͻÿ�. ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�. ");
	scanf_s("%d", &b);
	c = (a < b) ? b : a;
	printf("ū ���� %d �Դϴ�.", c);
}