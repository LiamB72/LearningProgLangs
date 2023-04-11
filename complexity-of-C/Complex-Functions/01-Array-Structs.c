#include <stdio.h>

struct Student
{
    char name[25];
    char averageGrade;
};


int main(){
    
    struct Student student1 = {"Gerald", 'A'};
    struct Student student2 = {"Poline", 'B'};
    struct Student student3 = {"Eloise", 'E'};
    struct Student student4 = {"Loane", 'D'};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%s\t :", students[i].name);
        printf("\t%c\n", students[i].averageGrade);
    }

    return 0;
}