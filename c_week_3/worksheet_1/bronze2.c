#include<stdio.h>

int main() {

    int a = 10;

    if (a%4 == 0)
    {
        if (a%5 == 0)
        {
            printf("wow %d is divisible by both 4 and 5\n", a);
        }
        else
        {
            printf("nuh uh\n");
        }
    }
            else
    {
        printf("nuh uh uh\n");
    }
    

    return (0);
}