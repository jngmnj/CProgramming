#include <stdio.h>

// 8-6. ������ ����� remove()�Լ�
void main()
{
	FILE* fp;
	char filename[20];
	puts("���� ���� �̸�: ");
	gets_s(filename);

	if ((remove(filename) == -1)) // remove() : ���ϻ��� �Լ�
		printf("\n *** ������ �� �����ϴ�. *** \n");
	else 
		printf("\n *** ������ �Ǿ����ϴ�. *** \n");

	return;
}
