#include <stdio.h>
#define UINT unsigned int
#define LL long long
#define PINT int*

int main(void) {
    unsigned int n = 10000;
    int i = 4294967295;
    unsigned int ui = 4294967295U;
    UINT uint = 4294967295U;
    LL l = 4294967295LL;
    unsigned long long ull = 18446744073709551615ULL;
    PINT ptr = &n;

    printf("%d\n", n);
    printf("%d\n", i);
    printf("%u\n", ui);
    printf("%u\n", uint);
    printf("%lld\n", l);
    printf("%llu\n", ull);
    printf("%d\n", *ptr);

    return 0;
}