#include <stdio.h>
/*
    정수 하나 입력 받은 후
    입력받은 정수만큼 삼각형을 출력
    숫자 입력 : 7
                줄번호     별개수    공백 개수
          *     1           1       6
         **     2           2       5
        ***     3           3       4
       ****     4           4       3
      *****     5           5       2
     ******     6           6       1
    *******     7           7       0
*/
int main(void) {
    int line;

    printf("줄 개수 : ");
    scanf("%d", &line);

    for (int i = 1; i <= line; i++) {
        for (int j = 0; j < line - i; j++)
            printf(" ");

        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}




