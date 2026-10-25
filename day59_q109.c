
/*
Q109: Find maximum sum of all subarrays of size k.

Sample Test Cases:
Input 1:
4
100 200 300 400
2
Output 1:
700

Input 2:
9
1 4 2 10 23 3 1 0 20
4
Output 2:
39

Input 3:
4
100 200 300 400
1
Output 3:
400
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    max = -2147483647;

    for(i = 0; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
            sum = sum + arr[j];

        if(sum > max)
            max = sum;
    }

    printf("%d\n", max);

    return 0;
}
