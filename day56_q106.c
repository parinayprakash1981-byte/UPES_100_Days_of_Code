
/*
Q106: Find the next greater element for each array element.

Sample Test Cases:
Input 1:
4
1 3 2 4
Output 1:
3, 4, 4, -1

Input 2:
5
6 8 0 1 3
Output 2:
8, -1, 1, 3, -1

Input 3:
4
1 2 3 5
Output 3:
2, 3, 5, -1

Input 4:
4
5 4 3 1
Output 4:
-1, -1, -1, -1
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, next;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        next = -1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }

        if(i > 0)
            printf(", ");

        printf("%d", next);
    }

    return 0;
}
