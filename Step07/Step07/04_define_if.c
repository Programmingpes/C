#include <stdio.h>

#define MODE 1

int main(void) {
#if MODE == 1
    printf("Hello");
#elif MODE == 2
    printf("World");
#else
    printf("Test");
#endif

    return 0;
}