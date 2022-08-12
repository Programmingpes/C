#include <stdio.h>

int main(void) {
	
	int arr1[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");


	int arr2[] = { 1,2,3,4,5,6,7 };

	for (int i = 0; i < 7; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");


	int arr3[5] = { 1,2,3 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr3[i]);
	}
	printf("\n");


	int arr4[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr4[i]);
	}
	printf("\n");

	return 0;
}