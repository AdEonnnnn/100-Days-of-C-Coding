/*
Q132 (Enum)
Define an enum for traffic lights and print Stop, Wait, or Go based on its value.
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
    char input[20];
    enum TrafficLight light;

    scanf("%s", input);

    if (input[0] == 'R')
        light = RED;
    else if (input[0] == 'Y')
        light = YELLOW;
    else
        light = GREEN;

    if (light == RED)
        printf("Stop");
    else if (light == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}
