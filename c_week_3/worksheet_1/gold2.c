#include<stdio.h>

int main () {

// use while loop to ask for test scores asking for it and it should
// be between 1 and 100 if not write error code and terminate the
// with -1
    
    int test;

    while (test != -1)
    {
        printf("Enter test score:\n");
        scanf("%d", &test);
        
        if ( test >= 0 && test <= 100)
        {
            printf("valid\n");
        }
        else
        {
            printf("invalid enter a number between 0 and 100\n");
        }
    }

    return (0);
}