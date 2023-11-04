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

    fread(buffer, sizeof(int) * sizeof(buffer) / sizeof(int), numbres.txt);
    
    printf("Sum of the numbers: %d\n", sum);

    fclose(numbers.txt)
    return(0);

}