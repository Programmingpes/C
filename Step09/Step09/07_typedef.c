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
        {"2001","��ö��", 3.1, "����"},
        {"2002","�迵��", 4.1, "�濵"},
        {"2003","�̼�", 2.1, "��ǻ��"}
    };

    Student* ptr = student;

    

    return 0;
}