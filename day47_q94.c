
/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>

int main()
{
    char ch, word[100], longest[100];
    int i = 0, j, max = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n')
    {
        if(ch != ' ')
        {
            word[i] = ch;
            i++;
        }
        else
        {
            if(i > max)
            {
                max = i;
                for(j = 0; j < i; j++)
                    longest[j] = word[j];
                longest[i] = '\0';
            }
            i = 0;
        }
    }

    if(i > max)
    {
        for(j = 0; j < i; j++)
            longest[j] = word[j];
        longest[i] = '\0';
    }

    printf("%s\n", longest);

    return 0;
}
