
/*
Q87: Count spaces, digits and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces = 1
Digits = 2
Special characters = 1
*/

#include <stdio.h>

int main()
{
    char ch;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");

    while((ch = getchar()) != '\n')
    {
        if(ch == ' ')
            spaces++;
        else if(ch >= '0' && ch <= '9')
            digits++;
        else if(!((ch >= 'a' && ch <= 'z') ||
                  (ch >= 'A' && ch <= 'Z')))
            special++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
