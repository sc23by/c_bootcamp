#include<stdio.h>

//write a program to find sum of all elements in a array of 5 integers

int main(){
    int n = 0;
    int a[5] = {5, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++)
        n = n + a[i];
        printf("%d\n", n);

    return (0);

}