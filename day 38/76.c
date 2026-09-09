// Q76: Check if a matrix is symmetric

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, flag = 1;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(r != c)
    {
        flag = 0;
    }
    else
    {
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(a[i][j] != a[j][i])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}