#include <stdio.h>
#pragma warning(disable:4996)

// 7-2. �л��� �̸��� ���� �� ������ ����ϴ� ����ü ���α׷�
struct student // ����ü ����
{
	const char *name; 
	const char *sex;
	int age;
	/*
	���ڿ����ͷ��� ����Ű�� �����͸� �����ϴ°��� �ٶ������� ����. 
	���ڿ����ͷ��� �б������̱⶧���� �����Ҽ� �����ϱ�.. 
	�׷��� const�� �ٿ� �����ͷ� �����ϴ°��� ������
	*/
};
void main()
{
	int i;

	struct student a[4] = { {"ȫ�浿", "��", 50}, {"ȫ���", "��", 50 }, {"ȫ�浿", "��", 50 }, {"ȫ�浿", "��", 50} };
	
	for (i = 0; i < 4; i++) {
		printf("%s %s %d \n", a[i].name, a[i].sex, a[i].age);
	}
	
}
