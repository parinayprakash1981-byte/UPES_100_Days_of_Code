
/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>

int main()
{
    int n, temp, first, last, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while(n >= 10)
    {
        n = n / 10;
        place = place * 10;
    }

    first = n;

    temp = temp - first * place - last;
    temp = temp + last * place + first;

    printf("%d\n", temp);

    return 0;
}
