
/*
Q104: Find the pivot integer x.

Sample Test Cases:
Input 1:
8
Output 1:
6

Input 2:
1
Output 2:
1

Input 3:
4
Output 3:
-1
*/

#include <stdio.h>

int main()
{
    int n, x, i;
    int left, right, found = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++)
    {
        left = 0;
        right = 0;

        for(i = 1; i <= x; i++)
            left = left + i;

        for(i = x; i <= n; i++)
            right = right + i;

        if(left == right)
        {
            found = x;
            break;
        }
    }

    printf("%d\n", found);

    return 0;
}
