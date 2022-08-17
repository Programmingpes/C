#include <stdio.h>

int main(void) {
	int arr[] = { 3, 2, 5, 7, 6 };
	int* ptr = arr;

	printf("%d \n", *ptr + 1); // 포인터 적용 후 + 1
	printf("%d \n", *(ptr + 1)); // 포인터 메모리 주소값 증가 후 포인터 적용

	//*ptr++;// 값이 아니라 주소값이 증가
	(* ptr)++;

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%p, %p\n", &arr[0], ptr);
	
	return 0;
}