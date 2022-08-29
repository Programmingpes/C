#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int win=0, draw=0, lose=0;
    char *str[3] = {"바위", "가위", "보"};
    srand((unsigned int)time(NULL));
    for(int i=0;i<5;i++){
        int com = rand() % 3 + 1;
        printf("가위 - 2, 바위 - 1 보 - 3 입력 : ");
        int player;
        scanf("%d",&player);

        printf("사용자 : %s, 컴퓨터는 : %s를 냈습니다. ",str[player-1],str[com-1]);
        if(player == com){
            draw++;
            printf("비겼습니다.\n");
        }else if(player % 3 + 1 == com){
            win++;
            printf("사용자가 이겼습니다\n");
        }else{
            lose++;
            printf("사용자가 졌습니다\n");
        }
    }
    printf("승 : %d, 무 : %d, 패 :  %d\n",win,draw,lose);
    return 0;
}