
/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>

int main()
{
    char date[20];
    int i;

    printf("Enter date: ");
    scanf("%s", date);

    for(i = 0; i < 2; i++)
        printf("%c", date[i]);

    printf("-Apr-");

    for(i = 6; i < 10; i++)
        printf("%c", date[i]);

    return 0;
}
