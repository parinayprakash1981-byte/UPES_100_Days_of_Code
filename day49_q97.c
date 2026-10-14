
/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>

int main()
{
    char ch;
    int start = 1;

    printf("Enter your name: ");

    while((ch = getchar()) != '\n')
    {
        if(start == 1 && ch != ' ')
        {
            printf("%c.", ch);
            start = 0;
        }

        if(ch == ' ')
            start = 1;
    }

    return 0;
}
