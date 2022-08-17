#include <stdio.h>


int main(void) {
	int arr[10];

	int* start = &arr[0];
	int* end = &arr[9];
	int num;

	while (start <= end) {
		printf("숫자 입력 : ");
		scanf("%d", &num);

		if (num % 2 == 0) {
			*end = num;
			end--;
		}
		else {
			*start = num;
			start++;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}
	

	return 0;
}