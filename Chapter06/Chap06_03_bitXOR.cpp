#include <stdio.h>
#pragma warning(disable:4996)

// 비트 XOR 연산으로 두 변수의 값을 교환
// XOR swap은 임시변수를 사용하지 않고 두 변수의 값을 교환하는 방법

void main()
{
    int a = 3;
    int b = 6;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // XOR 연산을 사용하여 a와 b의 값을 교환
    a ^= b;
    b ^= a;
    a ^= b;

    printf("After swap: a = %d, b = %d\n", a, b);
}
