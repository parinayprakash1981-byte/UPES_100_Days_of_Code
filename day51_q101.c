
/*
Q101: Find first and last occurrence of target.

Sample Test Cases:
Input 1:
6
5 7 7 8 8 10
8
Output 1:
3,4

Input 2:
6
5 7 7 8 8 10
6
Output 2:
-1,-1

Input 3:
6
5 7 7 8 8 10
10
Output 3:
5,5
*/

#include <stdio.h>

int main()
{
    int nums[100], n, target, i;
    int first = -1, last = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
                first = i;

            last = i;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
