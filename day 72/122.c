/*
Q122 (File Handling)
Open an existing file (e.g., info.txt) and read and print all lines using fgets().
*/

#include <stdio.h>

int main()
{
    char line[200];
    FILE *fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File does not exist!");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);
    return 0;
}
