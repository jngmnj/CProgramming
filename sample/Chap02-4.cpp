#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "factorial.h"


void main()
{
	int x;
	scanf("%d", &x);
	printf("%d! = %d", x,factorial(x));
	_getch();
}