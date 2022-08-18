#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char str1[] = "Made In Korea";
    char str2[20];

    //문자열 복사
    strcpy(str2, str1);
    printf("%s\n", str2);

    for (int i = 0; i < 20; i++) {
        printf("%d ", str2[i]);
    }
    printf("\n");

    char str3[] = "Made In Korea";
    char str4[] = "asdfsdgfsdfgs";

    //문자열 부분 복사 - 부분 복사는 마지막 문자 널문자 처리X
    strncpy(str4, str3, 4);
    printf("%s\n", str4);

    char str5[] = "Made In Korea";
    strncpy(str5 + 8, "U S A", 5);
    puts(str5);

    //문자열 길이
    int len = strlen(str5);
    printf("str5 문자열 길이 : %d\n", len);

    //문자열 붙이기
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

    //문자열 비교 strcmp --> 문자열이 같으면 0, 다르면 -1, 1이 리턴
    char str6[] = "Hello";

    printf("%d\n", strcmp(str6, "Hello"));
    printf("%d\n", strcmp(str6, "Aello"));
    printf("%d\n", strcmp(str6, "zello"));

    //문자 검색
    char str7[] = "asdfghjklzxcvbnfqwertfuiop";
    char* p = str7;
    while (1) {
        p = strchr(p, 'f');
        if (p == NULL) break;
        printf("%p %c\n", p, *p);
        p++;
    }

    //문자열 검색 - 검색한 문자열이 없으면 NULL을 리턴
    p = strstr(str7, "sdf");
    printf("%p\n", p);

    //문자열 잘라내기
    //첫번째 공백을 찾고 첫번째 문자열 위치 리턴
    //두번째 공백을 찾고 두번째 문자열 위치 리턴
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

    //문자열을 정수로 변환
    printf("%d\n", atoi("1234") * 2);
    //문자열을 실수로 변환
    printf("%lf\n", atof("3.1415"));

    printf("%d\n", parseInt("1234"));
    return 0;
}

int parseInt(char* n) {
    //받아온 문자열을 숫자로 변환
    int len = strlen(n);
    int result = 0, size = 1;

    for (int i = len - 1; i >= 0; i--, size *= 10) {
        result += (n[i] - 48) * size;
    }
    return result;
}