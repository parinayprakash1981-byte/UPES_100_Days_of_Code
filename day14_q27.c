
/*
Question 27: Sum of First n Odd Numbers

Write a program to print the sum of the first n odd numbers.

Sample Test Cases:

Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int odd=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + odd;
        odd = odd + 2;
    }

    printf("%d\n", sum);

    return 0;
}
