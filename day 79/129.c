/*
Q129 (File Handling)
Read integers separated by spaces from numbers.txt and print their sum and average.
*/

#include <stdio.h>

int main()
{
    int number, sum = 0, count = 0;
    FILE *fp = fopen("numbers.txt", "r");

    if (fp == NULL)
        return 1;

    while (fscanf(fp, "%d", &number) == 1)
    {
        sum += number;
        count++;
    }
    fclose(fp);

    printf("Sum = %d\nAverage = %.2f", sum, count == 0 ? 0.0 : (float)sum / count);
    return 0;
}
