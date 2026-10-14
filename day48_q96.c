
/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>

int main()
{
    char ch, word[100];
    int i = 0, j;

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
            for(j = i - 1; j >= 0; j--)
                printf("%c", word[j]);

            printf(" ");
            i = 0;
        }
    }

    for(j = i - 1; j >= 0; j--)
        printf("%c", word[j]);

    return 0;
}
