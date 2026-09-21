
/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], n, m, i;

    printf("Enter first array size: ");
    scanf("%d", &n);

    printf("Enter first array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array size: ");
    scanf("%d", &m);

    printf("Enter second array elements: ");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < m; i++)
        a[n + i] = b[i];

    for(i = 0; i < n + m; i++)
        printf("%d ", a[i]);

    return 0;
}
