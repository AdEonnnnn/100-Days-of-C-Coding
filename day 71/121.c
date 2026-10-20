/*
Q121 (File Handling)
Create a text file named info.txt in write mode. Take the user's name and age as input and write them using fprintf().
*/

#include <stdio.h>

int main()
{
    char name[100];
    int age;
    FILE *fp;

    fgets(name, sizeof(name), stdin);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL)
        return 1;

    fprintf(fp, "Name: ");
    fprintf(fp, "%s", name);
    fprintf(fp, "Age: %d", age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt");
    return 0;
}
