
/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main()
{
    int n, temp, digit, i;
    int count, max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 0; i <= 9; i++)
    {
        temp = n;
        count = 0;

        while(temp > 0)
        {
            digit = temp % 10;

            if(digit == i)
                count++;

            temp = temp / 10;
        }

        if(count > max)
        {
            max = count;
            result = i;
        }
    }

    printf("%d\n", result);

    return 0;
}
