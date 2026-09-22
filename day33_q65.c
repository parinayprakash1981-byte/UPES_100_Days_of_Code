
/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, search;
    int low, high, mid, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            printf("Found at index %d\n", mid);
            found = 1;
            break;
        }
        else if(search > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 0)
        printf("-1\n");

    return 0;
}
