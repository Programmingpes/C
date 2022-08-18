#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char str1[] = "Made In Korea";
    char str2[20];

    //���ڿ� ����
    strcpy(str2, str1);
    printf("%s\n", str2);

    for (int i = 0; i < 20; i++) {
        printf("%d ", str2[i]);
    }
    printf("\n");

    char str3[] = "Made In Korea";
    char str4[] = "asdfsdgfsdfgs";

    //���ڿ� �κ� ���� - �κ� ����� ������ ���� �ι��� ó��X
    strncpy(str4, str3, 4);
    printf("%s\n", str4);

    char str5[] = "Made In Korea";
    strncpy(str5 + 8, "U S A", 5);
    puts(str5);

    //���ڿ� ����
    int len = strlen(str5);
    printf("str5 ���ڿ� ���� : %d\n", len);

    //���ڿ� ���̱�
    char http[] = "http://";
    char www[] = "www.";
    char site[] = "naver.";
    char domain[] = "com";
    char url[100];

    strcpy(url, http);
    strcat(url, www);
    strcat(url, site);
    strcat(url, domain);

    puts(url);

    //���ڿ� �� strcmp --> ���ڿ��� ������ 0, �ٸ��� -1, 1�� ����
    char str6[] = "Hello";

    printf("%d\n", strcmp(str6, "Hello"));
    printf("%d\n", strcmp(str6, "Aello"));
    printf("%d\n", strcmp(str6, "zello"));

    //���� �˻�
    char str7[] = "asdfghjklzxcvbnfqwertfuiop";
    char* p = str7;
    while (1) {
        p = strchr(p, 'f');
        if (p == NULL) break;
        printf("%p %c\n", p, *p);
        p++;
    }

    //���ڿ� �˻� - �˻��� ���ڿ��� ������ NULL�� ����
    p = strstr(str7, "sdf");
    printf("%p\n", p);

    //���ڿ� �߶󳻱�
    //ù��° ������ ã�� ù��° ���ڿ� ��ġ ����
    //�ι�° ������ ã�� �ι�° ���ڿ� ��ġ ����
    char str8[] = "I got a Boy";
    char* ptr2;
    ptr2 = strtok(str8, " ");

    while (ptr2 != NULL) {
        puts(ptr2);
        ptr2 = strtok(NULL, " ");
    }

    for (int i = 0; i < sizeof(str8); i++) {
        printf("%d ", str8[i]);
    }
    printf("\n");

    //���ڿ��� ������ ��ȯ
    printf("%d\n", atoi("1234") * 2);
    //���ڿ��� �Ǽ��� ��ȯ
    printf("%lf\n", atof("3.1415"));

    printf("%d\n", parseInt("1234"));
    return 0;
}

int parseInt(char* n) {
    //�޾ƿ� ���ڿ��� ���ڷ� ��ȯ
    int len = strlen(n);
    int result = 0, size = 1;

    for (int i = len - 1; i >= 0; i--, size *= 10) {
        result += (n[i] - 48) * size;
    }
    return result;
}