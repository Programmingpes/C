#include <stdio.h>
struct Student {
    char sno[9];
    char name[11];
    double score;
    char major[21];
};
int main(void) {
    struct Student arr[3] = {
        {"2001","??ö??", 3.1, "????"},
        {"2002","?迵??", 4.1, "?濵"},
        {"2003","?̼?", 2.1, "??ǻ??"}
    };

    struct Student* ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("%s %-10s %g %s\n", (*ptr).sno, (*ptr).name, (*ptr).score, (*ptr).major);
        ptr++;
    }


    ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("%s %-10s %g %s\n", ptr->sno, ptr->name, ptr->score, ptr->major);
        ptr++;
    }

    return 0;
}