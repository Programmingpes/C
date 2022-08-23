#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int* arr = (int*)malloc(sizeof(int) * 4);

	for (int i = 0; i < 4; i++)
		arr[i] = i + 1;

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);
	printf("\n");


	free(arr);

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);
	printf("\n");


	return 0;
}