/* 
Question 5 (User Inputs, Operations & Output) - Day 2
Write a program to convert temperature from Celsius to Fahrenheit.

Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/

#include <stdio.h>

int main() {
    int celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("The temperature in Fahrenheit is %d\n", fahrenheit);

    return 0;
}
