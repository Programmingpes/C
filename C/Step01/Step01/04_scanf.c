#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// ������Ʈ ������ SDL �˻� -> �ƴϿ� �����ؾ� SCANF�� �����
int main(void) {
	int a = 0;

	printf("���� �Է� : ");
	scanf("%d", &a);

	printf("�Է� ���� ���� : %d\n", a);

	return 0;
}