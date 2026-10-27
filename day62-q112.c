
/*
Q112: Find the maximum sum of any contiguous subarray
using Kadane's Algorithm.

Sample Test Cases:
Input 1:
7
2 3 -8 7 -1 2 3
Output 1:
11

Input 2:
2
-2 -4
Output 2:
-2

Input 3:
5
5 4 1 7 8
Output 3:
25
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(sum + arr[i] > arr[i])
            sum = sum + arr[i];
        else
            sum = arr[i];

        if(sum > max)
            max = sum;
    }

    printf("%d\n", max);

    return 0;
}
