
/*
Q102: Find the index of the smallest element greater than
or equal to x.

Sample Test Cases:
Input 1:
7
1 2 8 10 11 12 19
5
Output 1:
2

Input 2:
7
1 2 8 10 11 12 19
20
Output 2:
-1

Input 3:
8
1 1 2 8 10 11 12 19
0
Output 3:
0

Input 4:
8
1 1 2 8 10 11 12 19
2
Output 4:
2
*/

#include <stdio.h>

int main()
{
    int arr[100], n, x, i, index = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}
