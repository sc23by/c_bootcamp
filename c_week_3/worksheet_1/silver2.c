#include<stdio.h>

int main () {

    int temperature;

    printf("whats the temperature");
    scanf("%d", &temperature);

    if (temperature <= 40 && temperature >= -10)
    {
        printf("%d is valid\n", temperature);
    }
    else
    {
        printf("%d is invalid\n", temperature);
    }    


    return (0);
}
