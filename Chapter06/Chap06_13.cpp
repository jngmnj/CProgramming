#include <stdio.h>
#pragma warning(disable:4996)

// 6-13. �迭�� �����͸� �̿��� ���� ���� ���α׷�
void main()
{
	float array[] = { 100.0, 200.0, 300.0, 400.0, 500.0 };
	float *ptr;
	int len;
	ptr = &array[0];
	printf("%.1f\n", *ptr); // 100.0 ���
	ptr++;
	printf("%.1f\n", *ptr); // 200.0 ���
	ptr++;
	printf("%.1f\n", *ptr); // 300.0 ���
	ptr++;
	printf("%.1f\n", *ptr); // 400.0 ���
	ptr++;
	printf("%.1f\n", *ptr); // 500.0 ���

	ptr = array; // ������ ��ġ �迭 ó����ġ�� ����
	printf("%.1f\n", *(ptr + 2)); // 300.0�� ��������� ������ ��ġ�� ������� ����
	printf("%.1f %.1f\n", (ptr + 0)[0], (array + 0)[0]); // 100.0
	printf("%.1f %.1f\n", (ptr + 1)[0], (array + 1)[0]); // 200.0
	printf("%.1f %.1f\n", (ptr + 4)[0], (array + 4)[0]); // 500.0
	printf("%.1f %.1f\n", (ptr - 1)[2], (array - 1)[2]); // 200.0
	printf("%.1f %.1f\n", (ptr - 20)[23], (array - 20)[23]); // 400.0
	return;
}