#include <stdio.h>

int main(void) {
	int size = 5;
	printf("배열 개수 입력 :");
	scanf("%d", &size);
	int arr[size];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}