
/*
Q108: Find product of all elements except the current element.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
24 12 8 6

Input 2:
5
-1 1 0 -3 3
Output 2:
0 0 9 0 0
*/

#include <stdio.h>

int main()
{
    int nums[100], n, i, j, product;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
                product = product * nums[j];
        }

        printf("%d ", product);
    }

    return 0;
}
