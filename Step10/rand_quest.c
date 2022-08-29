#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned int)time(NULL));
    printf("RAND_MAX: %d\n",RAND_MAX);
    for(int i=0;i<6;i++){
        printf("%d\n",rand() % (77-35+1) + 35);
    }
    return 0;
}
