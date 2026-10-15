
/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>

int main()
{
    char ch, name[100];
    int i = 0, j, start = 1, last = 0;

    printf("Enter your name: ");

    while((ch = getchar()) != '\n')
    {
        name[i] = ch;
        i++;
    }
    name[i] = '\0';

    for(j = 0; j < i; j++)
    {
        if(name[j] == ' ')
            last = j + 1;
    }

    start = 1;

    for(j = 0; j < last - 1; j++)
    {
        if(start == 1 && name[j] != ' ')
        {
            printf("%c.", name[j]);
            start = 0;
        }

        if(name[j] == ' ')
            start = 1;
    }

    printf(" ");

    for(j = last; j < i; j++)
        printf("%c", name[j]);

    return 0;
}
