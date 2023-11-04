include <stdio.h>
include <stdlib.h>
int main(void)
{
    int buffer[1024];
    int sum = 0;
    int i;

    FILE *file = fopen("numbers.txt", "r");

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
    printf("Sum of the numbers: %d\n", sum);

    fclose(file);
    return(0);

}