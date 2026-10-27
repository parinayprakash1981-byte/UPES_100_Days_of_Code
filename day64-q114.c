
/*
Q114: Find the length of the longest substring
without repeating characters.

Sample Test Cases:
Input 1:
abcabcbb
Output 1:
3

Input 2:
bbbbb
Output 2:
1

Input 3:
pwwkew
Output 3:
3
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, count, max = 0;
    int seen[256];

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        for(k = 0; k < 256; k++)
            seen[k] = 0;

        count = 0;

        for(j = i; s[j] != '\0'; j++)
        {
            if(seen[(unsigned char)s[j]] == 1)
                break;

            seen[(unsigned char)s[j]] = 1;
            count++;
        }

        if(count > max)
            max = count;
    }

    printf("%d\n", max);

    return 0;
}
