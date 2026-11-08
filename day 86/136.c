/*
Q136 (Enum)
Use enum to represent menu choices and perform operations using switch.
*/

#include <stdio.h>

enum Menu
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    char choice[20];
    int a, b;
    enum Menu menu;
    scanf("%s %d %d", choice, &a, &b);

    if (choice[0] == 'A')
        menu = ADD;
    else if (choice[0] == 'S')
        menu = SUBTRACT;
    else
        menu = MULTIPLY;

    switch (menu)
    {
    case ADD:
        printf("%d", a + b);
        break;
    case SUBTRACT:
        printf("%d", a - b);
        break;
    case MULTIPLY:
        printf("%d", a * b);
        break;
    }

    return 0;
}
