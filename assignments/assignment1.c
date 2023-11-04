include <stdio.h>
include <stdlib.h>
int main(void)
{
    int buffer[1024];
    int sum = 0;

    FILE *file = fopen("numbers.txt", "r";

    if file == NULL
    {
        perror("Error opening file");
        return (1);
    }

    fread()

    sum = buffer[0] + buffer[1] + buffer[2] + buffer[3] + buffer[4] + buffer[5];
    printf("Sum of the numbers: %d\n", sum);

    fclose(numbers.txt)
    return(0);

}