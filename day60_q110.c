
/*
Q110: Find maximum element in each subarray of size k.

Sample Test Cases:
Input 1:
9
1 2 3 1 4 5 2 3 6
3
Output 1:
3 3 4 5 5 5 6

Input 2:
5
5 1 3 4 2
1
Output 2:
5 1 3 4 2
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for(j = i; j < i + k; j++)
        {
            if(arr[j] > max)
                max = arr[j];
        }

        printf("%d ", max);
    }

    return 0;
}
