#include<stdio.h>

int main() {

    int a [10];
    int count;

    for (count = 0; count < 10; count ++)
    {
        a[count] = count * 10 + count;
    }

    printf("the first and second elements are %d and %d ", a[0], a[1]);
    printf("or, via pointers, %d and %d\n", *a, *(a+1));

    return (0);

}