#include <stdio.h>

typedef struct
{
    char name[20];
    char student_id[11];
    unsigned mark;    
} STUDENT;

int main()
{
    int number_of_students = 10, i;
    STUDENT students [] = {

    };

    for (i=0; i<10; i++)
    {
        printf("-------------\n");
        printf("student name: %s\n", students[i].name);
        printf("student id: %s\n", students[i].student_id);
        printf("final mark: %u\n", students[i].mark);

    }

    printf("-------------\n");
    return (0);

}