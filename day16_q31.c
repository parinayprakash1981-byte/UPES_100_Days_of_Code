
/*
Question 31: Decimal to Binary

Write a program to take a number as input
and print its equivalent binary representation.

Sample Test Cases:

Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/

#include <stdio.h>

int main() {
    int n, rem, reverse = 0, binary = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        reverse = reverse * 10 + rem;
        n = n / 2;
    }

    while (reverse > 0) {
        rem = reverse % 10;
        binary = binary * 10 + rem;
        reverse = reverse / 10;
    }

    printf("Binary: %d\n", binary);

    return 0;
}
