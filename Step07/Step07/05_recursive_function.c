#include <stdio.h>

void PrintNumber(int n) {
    printf("%d\n", n);
    if (n == 0)
        return;
    PrintNumber(n - 1);
}

int main(void) {
    PrintNumber(2147483647);
    return 0;
}