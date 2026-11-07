
/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN)
and print Stop, Wait, or Go based on its value.

Sample Test Cases:
Input 1:
GREEN

Output 1:
Go
*/

#include <stdio.h>

int main()
{
    enum traffic
    {
        RED, YELLOW, GREEN
    };

    int light;

    printf("Enter traffic light (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &light);

    if(light == RED)
        printf("Stop");
    else if(light == YELLOW)
        printf("Wait");
    else if(light == GREEN)
        printf("Go");
    else
        printf("Invalid value");

    return 0;
}
