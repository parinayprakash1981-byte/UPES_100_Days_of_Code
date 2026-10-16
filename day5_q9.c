
/*
Question 9 (Simple and Compound Interest) - Day 5

Write a program to calculate simple and compound interest
for given principal, rate, and time.

Sample Test Cases:

Input 1:
1000 5 2

Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3

Output 2:
Simple Interest=1050, Compound Interest=1125.76
*/

#include <stdio.h>

int main() {
    int p, r, t;
    float si, ci, amount;

    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;

    for (int i = 1; i <= t; i++) {
        amount = amount + (amount * r / 100);
    }

    ci = amount - p;

    printf("Simple Interest=%f\n", si);
    printf("Compound Interest=%f\n", ci);

    return 0;
}
