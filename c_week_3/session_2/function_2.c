#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}


int main ()
{
    float x = 2;
    float y = 5;
    float z = sum (x, y);

    printf("the sum of %.2f and %.2f is %.2f\n", x, y, z );

}
