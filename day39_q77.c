
/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements: ");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    if(r != c)
        flag = 0;
    else
    {
        for(i = 0; i < r; i++)
        {
            for(j = i + 1; j < r; j++)
            {
                if(a[i][i] == a[j][j])
                    flag = 0;
            }
        }
    }

    if(flag == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
