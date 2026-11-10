/*
Q138 (Enum)
Print all enum names and integer values using a loop.
*/

#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char *names[] = {"RED", "YELLOW", "GREEN"};
    enum TrafficLight color;

    for (color = RED; color <= GREEN; color++)
        printf("%s=%d\n", names[color], color);

    return 0;
}
