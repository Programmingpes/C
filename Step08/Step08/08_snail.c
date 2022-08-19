#include <stdio.h>
void PrintArray(int arr[][5])
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
int main(void)
{
    int arr[5][5] = { 0 };
    int i = 0, j = -1, s = 1, k = 5, n = 0;

    while (1) {
        // 행방향 채우기
        for (int p = 0; p < k; p++) {
            n++;
            j+=s;
            arr[i][j] = n;
        }
        k--;
        PrintArray(arr);
        printf("---------------------------\n");
        if (k == 0) break;
        // 열방향 채우기
        for (int p = 0; p < k; p++) {
            n++;
            i += s;
            arr[i][j] = n;
        }
        s = -s;
        PrintArray(arr);
        printf("---------------------------\n");
    }

    return 0;
}