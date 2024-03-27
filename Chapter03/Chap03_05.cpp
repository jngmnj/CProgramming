#include <stdio.h>

void main()
{
	int a = 10;
	int b = 20;
	int c, d;

	c = a + b;
	printf("c=%d\n", c);
	d = a > 5 && b < 10; // t&&f = false = 0
	printf("d=%d\n", d);

	if (a > b) 
	{
		printf("a는 b보다 크다.");
	}
	else {
		printf("a는 b보다 작다.");
	}
}