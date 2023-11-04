#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
    int buffer[1024];
    int sum = 0;
    int i;

    FILE *file = fopen("numbers", "r");

    if (file == NULL)
    {
        perror("Error opening file");
        return (1);
    }

    fread(buffer, sizeof(int), sizeof(buffer) / sizeof(int), file);
    for (i = 0; i < sizeof(buffer) / sizeof(int); i++)
    {
        sum += buffer[i];
    }
    printf("The numbers in the file: %d\n" "Sum of the numbers: %d\n", buffer[i] sum);

    fclose(file);
    return(0);

}