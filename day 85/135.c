/*
Q135 (Enum)
Assign explicit enum values starting from 10 and print them.
*/

#include <stdio.h>

enum Letter
{
    A = 10,
    B,
    C
};

int main()
{
    printf("A=%d\nB=%d\nC=%d", A, B, C);
    return 0;
}
