#include <stdio.h>
/*
	�������� - ������ ���� ���
		��� �Լ����� ������ ������ ���
		���������� �Լ� �ۿ��ٰ� ����
*/
int count = 0;
int sum(int a, int b) {
	count++;
	return a + b;
}
int main(void) {
	//int count = -1;
	printf("sum : %d\n", sum(1, 2));
	printf("sum : %d\n", sum(3, 5));
	printf("sum : %d\n", sum(6, 2));
	printf("sum : %d\n", sum(1, 3));
	printf("count : %d\n", count);
	return 0;
}