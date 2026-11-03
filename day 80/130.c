/*
Q130 (File Handling)
Store multiple student records in a file using fprintf(), then read them using fscanf().
*/

#include <stdio.h>

int main()
{
    char name[50];
    int roll, marks, i, count;
    FILE *fp;

    scanf("%d", &count);
    fp = fopen("students.txt", "w");
    if (fp == NULL)
        return 1;

    for (i = 0; i < count; i++)
    {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL)
        return 1;
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    fclose(fp);
    return 0;
}
