#include <stdio.h>
#pragma warning(disable:4996)

// ��Ʈ XOR �������� �� ������ ���� ��ȯ
// XOR swap�� �ӽú����� ������� �ʰ� �� ������ ���� ��ȯ�ϴ� ���

void main()
{
    int a = 3;
    int b = 6;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // XOR ������ ����Ͽ� a�� b�� ���� ��ȯ
    a ^= b;
    b ^= a;
    a ^= b;

    printf("After swap: a = %d, b = %d\n", a, b);
}
