/* 
Question 4 (User Inputs, Operations & Output) - Day 2
Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>

int main() {
    float radius;
    float area, circumference;
    float pi = 3.14159; 

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("The area is %f\n", area);
    printf("The circumference is %f\n", circumference);

    return 0;
}
