#include <stdio.h>
#include <stdlib.h>

int main() {

    char filename [] = "squares.dat";

    FILE *file = fopen(filename, "a+");
   
    if (file == NULL) {
        perror("");
        return 1;
    }
    float j = 0;
    int i = 0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer,buffer_size,file) != '\0')
    {
        i++;
        j = j + atoi(line_buffer);
    }

    float q = j / i;
    fprintf(file, "%.2f\n", q);

    printf("%.2f\n", q);
    fclose(file);
    return 0;
}