
/*
Q116: Find two indices whose elements add up to target.

Sample Test Cases:
Input 1:
4
2 7 11 15
9
Output 1:
0 1

Input 2:
3
3 2 4
6
Output 2:
1 2

Input 3:
2
3 3
6
Output 3:
0 1
*/

#include <stdio.h>

int main()
{
    int nums[100], n, target, i, j, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }

        if(found == 1)
            break;
    }

    if(found == 0)
        printf("-1 -1\n");

    return 0;
}
