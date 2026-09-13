
/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        if(i == 1 || i == 5)
        {
            printf("*\n\n");
        }
        else if(i == 2)
        {
            for(j = 1; j <= 3; j++)
                printf("*\n");

            printf("\n");
        }
        else if(i == 3)
        {
            for(j = 1; j <= 5; j++)
                printf("*\n");

            printf("\n");
        }
        else
        {
            for(j = 1; j <= 3; j++)
                printf("*\n");

            printf("\n");
        }
    }

    return 0;
}
