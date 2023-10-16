#include<stdio.h>

int main() {

    int test;

    printf("what score did you get?\n");
    scanf("%d", &test);

    if (test >= 100 && test <= 0)
        {
        if (test == 0) 
        {
            printf("you have got zero! \n");
        }
        else if ( test > 40)
        {
            printf("you have passed! \n");
        }
        else
        {
            printf("you have failed... \n");
        }
        }
    else
        printf("not with range\n");

    return (0);



}