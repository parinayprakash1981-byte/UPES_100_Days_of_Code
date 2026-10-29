
/*
Q118: Find the missing number from 0 to n.

Sample Test Cases:
Input 1:
4
0 3 2 4
Output 1:
1

Input 2:
3
1 2 3
Output 2:
0

Input 3:
5
0 4 3 1 5
Output 3:
2
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;
    int total, missing;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    missing = total - sum;

    printf("%d\n", missing);

    return 0;
}
