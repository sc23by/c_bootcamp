#include <stdio.h>

float farenheit;
float celcius;
float newton;



float tempconvcelcius (float farenheit)
{
    float celcius;
    celcius = (farenheit - 32 ) * 5/9;
    return celcius;
}

float tempconvnewton (float farenheit)
{
    float newton;
    newton = (farenheit - 32) * 11/60;
    return newton;
}

int main () 
{
    char option;

    printf("enter farenheit temperature:\n");
    scanf("%f", &farenheit);

    printf("what do you want to convert it to?\n");
    printf("C for celcuis?\n");
    printf("N for newton?\n");
    scanf("%c", &option);

    switch (option)
    {
        case 'C' : printf(" %f\n ", tempconvcelcius(celcius));
        break;

        case 'N' : printf(" %f\n ", tempconvnewton(newton));
        break;

        default : break;
        
    }

    return (0);

}

