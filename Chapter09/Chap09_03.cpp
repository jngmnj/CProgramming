#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 9-3. 3���� �����͸� ������ ��, �������Ͱ� ����Ű�� ��(heap)�� �����͸� ����
void main()
{
	int* intptr;
	float* floatptr;
	char* name;

	// ������ �޸𸮸� ��� ��
	intptr = (int*)malloc(sizeof(int));
	floatptr = (float*)malloc(sizeof(float));
	name = (char*)malloc(20 * sizeof(char)); // ������ 20���ڸ�ŭ�� �޸𸮸� ��� ��

	*intptr = 25;
	*floatptr = 3.141592;
	printf("�̸���?");
	//gets(name);

	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0'; // fgets�� ���� ���ڸ� �����ϹǷ� ����

	// ���
	printf("����� ��: \n");
	printf("\t *intptr = %d\n", *intptr);
	printf("\t *floatptr = %f\n", *floatptr);
	printf("\t name=%s\n", name);

	free(intptr);
	free(floatptr);
	free(name);
}