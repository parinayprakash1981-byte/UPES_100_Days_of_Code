
/*
Q113: Find the kth smallest element in an array.

Sample Test Cases:
Input 1:
10
10 5 4 3 48 6 2 33 53 10
4
Output 1:
5

Input 2:
6
7 10 4 3 20 15
3
Output 2:
7
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);

    return 0;
}
