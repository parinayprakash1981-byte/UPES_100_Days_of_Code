
/*
Q103: Find the leftmost pivot index.

Sample Test Cases:
Input 1:
6
1 7 3 6 5 6
Output 1:
3

Input 2:
3
1 2 3
Output 2:
-1

Input 3:
3
2 1 -1
Output 3:
0
*/

#include <stdio.h>

int main()
{
    int nums[100], n, i, j;
    int total = 0, left = 0, right;
    int pivot = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for(i = 0; i < n; i++)
    {
        right = total - left - nums[i];

        if(left == right)
        {
            pivot = i;
            break;
        }

        left = left + nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}
