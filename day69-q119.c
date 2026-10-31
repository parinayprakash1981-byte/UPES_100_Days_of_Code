
/*
Q119: Find the repeated element in an array.

Sample Test Cases:
Input 1:
4
1 3 3 4
Output 1:
3

Input 2:
3
1 2 2
Output 2:
2

Input 3:
5
0 4 1 1 5
Output 3:
1
*/

#include <stdio.h>

int main()
{
    int arr[100], count[101] = {0};
    int n, i, repeated = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        count[arr[i]]++;

        if(count[arr[i]] == 2)
            repeated = arr[i];
    }

    printf("%d\n", repeated);

    return 0;
}
