#include <stdio.h>	
#include <stdlib.h>	
#pragma warning(disable:4996)

// 5-3. �Էµ� ���� seed������ �Ͽ� ������ ���ϴ� ���α׷�
void main()
{
	int number;
	printf("input number:");
	scanf("%d", &number);
	srand(number); // srand(): ���� �߻� �Լ��� ���� �߻� ���� �� seed�� �����ϴ� �Լ�
	for (int i = 0; i < 5; i++)
		printf("%d \n", rand()); // rand(): 0���� 32767������ �������� ���� ���� �Լ�
}