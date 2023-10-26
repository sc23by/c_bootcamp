#include <stdio.h>
#include <string.h>

struct student
{
    char name [30];
    char student_id [11];
    unsigned mark;
};

int main ()
{
    struct student new_student;
    strcpy(new_student.name, "belal yahouni");
    strcpy(new_student.student_id, "201736144");
    printf("input mark:\n");
    scanf("%u", &new_student.mark);
    printf("%s\n", new_student.name);
    printf("%s\n", new_student.student_id);
    printf("%u\n", new_student.mark);

    return (0);    
}