#include <stdio.h>

typedef int* PINT;
typedef unsigned int UINT;
typedef unsigned long long ULLONG;

struct Student {
    char sno[9];
    char name[11];
    double score;
    char major[21];
};

typedef struct Student Student;

int main(void) {
    PINT ptr;
    UINT i;
    ULLONG data;

    Student student[3] =  {
        {"2001","±èÃ¶¼ö", 3.1, "°ÔÀÓ"},
        {"2002","±è¿µ¿õ", 4.1, "°æ¿µ"},
        {"2003","ÀÌ¼ö", 2.1, "ÄÄÇ»ÅÍ"}
    };

    Student* ptr = student;

    

    return 0;
}