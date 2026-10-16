/* 
Question 2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.

Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod, quot;

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    
    if (num2 != 0) {
        quot = num1 / num2;
    } else {
        quot = 0;
    }

    printf("The sum of the numbers is = %d\n", sum);
    printf("The difference of the numbers is = %d\n", diff);
    printf("The product of the numbers is = %d\n", prod);
    printf("The quotient of the numbers is = %d\n", quot);
    
    return 0;
}
