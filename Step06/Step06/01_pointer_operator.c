#include <stdio.h>

int main(void) {
	int arr[] = { 3, 2, 5, 7, 6 };
	int* ptr = arr;

	printf("%d \n", *ptr + 1); // ������ ���� �� + 1
	printf("%d \n", *(ptr + 1)); // ������ �޸� �ּҰ� ���� �� ������ ����

	//*ptr++;// ���� �ƴ϶� �ּҰ��� ����
	(* ptr)++;

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%p, %p\n", &arr[0], ptr);
	
	return 0;
}