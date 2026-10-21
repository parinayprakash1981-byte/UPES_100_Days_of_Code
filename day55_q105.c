
/*
Q105: Find the majority element.

Sample Test Cases:
Input 1:
3
3 2 3
Output 1:
3

Input 2:
7
2 2 1 1 1 2 2
Output 2:
2

Input 3:
8
2 2 1 1 1 2 2 3
Output 3:
-1
*/

#include <stdio.h>

int main()
{
    int nums[100], n, i, j;
    int count, majority = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }

        if(count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);

    return 0;
}
