#include<stdio.h>

int main() {

    int n = 0;
    int a[10] = {1, 10, 20, 15, 5, 18, 37, 11, 100, 2};
    
    for (int i = 0; i < 10; i++)
    {

        if (n < a[i])
        {
            n = 0 + a[i];
            printf("%d\n", n);
        }
        
    }
    
    return (0);
}