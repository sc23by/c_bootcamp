#include<stdio.h>

int main() {

    int a = 0;

    if ( a == 0)
    {
        printf("%d is zero\n", a);
    }

    else if ( a%2 == 0)
    {
        printf("%d is even\n", a);
    }

    else
    {
        printf("%d is odd\n", a);
    }
    
    return(0);
}