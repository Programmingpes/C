#include <stdio.h>
/*
	��Ģ ����
		+ - * / %(������ ������� ����Ÿ�� �������� ���밡��)

	���� �ΰ��� �Է¹޾Ƽ�
	��Ģ���� ����� ���
*/

int main(void) {
	int n1 = 0, n2 = 0;

	printf("���� �ΰ� �Է� : ");
	scanf("%d %d", &n1, &n2);

	printf("�Է¹��� ���� : %d, %d\n", n1, n2);

	printf("���� : %d\n", n1 + n2);
	printf("���� : %d\n", n1 - n2);
	printf("���� : %d\n", n1 * n2);

	printf("������ : %d\n", n1 / n2);
	printf("������ ������ : %d\n", n1 % n2);

	return 0;
}