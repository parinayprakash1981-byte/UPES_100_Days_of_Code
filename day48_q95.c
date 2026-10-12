
/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], temp[200];
    int i, found = 0;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    if(strlen(a) == strlen(b))
    {
        strcpy(temp, a);
        strcat(temp, a);

        for(i = 0; i <= strlen(temp) - strlen(b); i++)
        {
            if(strncmp(temp + i, b, strlen(b)) == 0)
            {
                found = 1;
                break;
            }
        }
    }

    if(found == 1)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
