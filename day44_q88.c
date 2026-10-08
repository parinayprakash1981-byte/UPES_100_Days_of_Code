
/*
Q88: Replace spaces in a string with hyphens.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

Input 2:
C programming is fun
Output 2:
C-programming-is-fun
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a string: ");

    while((ch = getchar()) != '\n')
    {
        if(ch == ' ')
            printf("-");
        else
            printf("%c", ch);
    }

    return 0;
}
