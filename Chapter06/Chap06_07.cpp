#include <stdio.h>
#pragma warning(disable:4996)

// 6-7. 최댓값과 최솟값을 찾는 프로그램
void main()
{
	int A[] = { 76,-59,-34,90,169,-12,13,103,3,29 }; 
	int i, *p, max = -1000, min = 1000; 
	int maxloc, minloc;

	p = &A[0];
	printf("배열의 값[ ] = {");
	for (i = 0; i < 10; i++) {
		if (*(p + i) > max) {
			max = *(p + i);
			maxloc = i + 1;
		}
		if (*(p + i) < min) {
			min = *(p + i);
			minloc = i + 1;
		}
		printf(" %d", *(p + i));
	}

	printf("} \n");
	printf("최댓값 ==> %d, 위치 ==> %d번째 \n", max, maxloc);
	printf("최솟값 ==> %d, 위치 ==> %d번째 \n", min, minloc);
}