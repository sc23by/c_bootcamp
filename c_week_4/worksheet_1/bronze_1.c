#include <stdio.h>

int main() {

    char filename [] = "squares.dat";
    // defining a name for our file using char
    FILE *file = fopen(filename, "w");
    // opening the file, using the file name saved earlier and going into write mode
    if (file == NULL) {
        perror("");
        return 1;
    }
    //checking if it works, not needed but useful

    int number, square;
    //defining two int
    printf("what number you want until: \n");
    scanf("%d", &number);
    //getting a number value
    for (int i = 0; i <= number; i++) {
        square = i*i;
        fprintf(file, "%d\n", square);
    }
    //loop each time getting the square, writing it, and resetiting and doing over

    fclose(file);
    //closing file
    return 0;
}