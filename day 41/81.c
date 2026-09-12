#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}