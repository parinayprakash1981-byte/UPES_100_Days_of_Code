
/*
Q120: Change a string to sentence case.

Sample Test Cases:
Input 1:
I am trying to build logic.
Output 1:
I Am Trying To Build Logic.

Input 2:
The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

#include <stdio.h>

int main()
{
    char ch;
    int start = 1;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n')
    {
        if(start == 1 && ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        printf("%c", ch);

        if(ch == ' ')
            start = 1;
        else
            start = 0;
    }

    return 0;
}
