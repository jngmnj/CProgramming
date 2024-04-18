#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 9-3. 3개의 포인터를 정의한 후, 이포인터가 가르키는 힙(heap)에 데이터를 저장
void main()
{
	int* intptr;
	float* floatptr;
	char* name;

	// 힙에서 메모리를 얻어 옴
	intptr = (int*)malloc(sizeof(int));
	floatptr = (float*)malloc(sizeof(float));
	name = (char*)malloc(20 * sizeof(char)); // 힙에서 20문자만큼의 메모리를 얻어 옴

	*intptr = 25;
	*floatptr = 3.141592;
	printf("이름은?");
	//gets(name);

	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0'; // fgets는 개행 문자를 포함하므로 제거

	// 출력
	printf("저장된 값: \n");
	printf("\t *intptr = %d\n", *intptr);
	printf("\t *floatptr = %f\n", *floatptr);
	printf("\t name=%s\n", name);

	free(intptr);
	free(floatptr);
	free(name);
}