#include <stdio.h>
struct Student {
    char sno[9];
    char name[11];
    double score;
    char major[21];
};
int main(void) {
    struct Student arr[3] = {
        {"2001","±èÃ¶¼ö", 3.1, "°ÔÀÓ"},
        {"2002","±è¿µ¿õ", 4.1, "°æ¿µ"},
        {"2003","ÀÌ¼ö", 2.1, "ÄÄÇ»ÅÍ"}
    };

    for (int i = 0; i < 3; i++) {
    printf("%s %-10s %g %s\n", arr[i].sno, arr[i].name, arr[i].score, arr[i].major);

    }
    return 0;
}