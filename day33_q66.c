
/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, num, j;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    i = n - 1;

    while(i >= 0 && a[i] > num)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = num;

    for(j = 0; j <= n; j++)
        printf("%d ", a[j]);

    return 0;
}
