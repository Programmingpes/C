#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int* arr = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
		arr[i] = i + 1;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");

	free(arr);

	arr = (int*)calloc(10, sizeof(int));
		
	for (int i = 0; i < 10; i++)
		arr[i] = (i + 1) * 2;

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n");


	free(arr);

	return 0;
}