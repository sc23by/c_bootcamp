#include<stdio.h>

int main () {

    int menu;

    printf("menu \n 1\n 2 \n 3\n 4\n 5\n\nchoose your intended number\n");
    scanf("%d", &menu);

    if (menu >=1 && menu <= 5)
    {
        switch (menu)
        {
            case 1 : printf("menu 1 \n");
            break;

            case 2 : printf("menu 2 \n");
            break;

            case 3 : printf("menu 3 \n");
            break;

            case 4 : printf("menu 4 \n");
            break;

            case 5 : printf("menu 5 \n");
            break;
        }
    }
    else
    {
        printf("invalid: pick a number 1 to 5");
    }

    return (0);
}