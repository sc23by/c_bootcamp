#include<stdio.h>

int main() {

    int score;

    printf("what was your score?\n");
    scanf("%d", &score);

    if (score >= 0 && score <= 100)
    {
        if ( score >= 70)
        {
            printf("distinction\n");
        }
        else if (score >= 50)
        {
            printf("pass\n");
        }
        else
        {
            printf("fail\n");
        }
    }
    else
    {
        printf("invalid score enter between 1 and 100\n");
    }


    return (0);
}