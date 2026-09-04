
/*
Q40: Write a program to find the 1's complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000
*/

#include <stdio.h>

int main()
{
    int n, rem, reverse = 0, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;

        if(rem == 0)
            rem = 1;
        else
            rem = 0;

        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    while(reverse > 0)
    {
        rem = reverse % 10;
        result = result + rem * place;
        place = place * 10;
        reverse = reverse / 10;
    }

    printf("%d\n", result);

    return 0;
}
