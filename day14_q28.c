
/*
Question 28: Product of Even Numbers

Write a program to print the product of even numbers
from 1 to n.

Sample Test Cases:

Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>

int main() {
    int n, i, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
        }
    }

    printf("%d\n", product);

    return 0;
}
