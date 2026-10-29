
/*
Q117: Merge two sorted arrays into one sorted array.

Sample Test Cases:
Input 1:
4
2 7 11 15
3
4 8 10
Output 1:
2 4 7 8 10 11 15

Input 2:
3
1 2 7
3
9 10 17
Output 2:
1 2 7 9 10 17

Input 3:
3
-10 -2 7
3
-3 -1 7
Output 3:
-10 -3 -2 -1 7 7
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n, m, i = 0, j = 0, k = 0;

    printf("Enter first array size: ");
    scanf("%d", &n);

    printf("Enter first array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array size: ");
    scanf("%d", &m);

    printf("Enter second array elements: ");
    for(j = 0; j < m; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
