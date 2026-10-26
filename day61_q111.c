
/*
Q111: Find the first negative integer in each subarray of size k.

Sample Test Cases:
Input 1:
5
-8 2 3 -6 10
2
Output 1:
-8 0 -6 -6

Input 2:
8
12 -1 -7 8 -15 30 16 28
3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
4
12 1 3 5
3
Output 3:
0 0
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int first;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        first = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                first = arr[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}
