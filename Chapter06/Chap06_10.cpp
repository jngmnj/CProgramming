#include <stdio.h>
#pragma warning(disable:4996)

// 6-10. ������ �迭�� �̿��� ���α׷�
void main()
{
	int str;
	//char *name[5] = {{"KOREA"}, {"NATIONAL"}, {"OPEN UNIVERSITY"}, {"COMPUTER"}, {"SCIENCE"}}; // error
	char name1[] = "KOREA";
	char name2[] = "NATIONAL";
	char name3[] = "OPEN UNIVERSITY";
	char name4[] = "COMPUTER";
	char name5[] = "SCIENCE";
	char* name[5] = { name1, name2, name3, name4, name5 };

	for (str = 0; str < 5; str++) {
		printf("ù��° �̸��� %s\n", *(name + str));
		return;
	}
}