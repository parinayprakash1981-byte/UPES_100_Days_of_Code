
/*
 * Question 9 (User Inputs, Operations & Output) - Day 5
 * Write a program to calculate simple and compound interest for given principal, rate, and time.
 *
 * Sample Test Cases:
 * Input 1:
 * 1000 5 2
 * Output 1:
 * Simple Interest=100, Compound Interest=102.5
 *
 * Input 2:
 * 5000 7 3
 * Output 2:
 * Simple Interest=1050, Compound Interest=1125.76
 */

#include <stdio.h>

int main()
{
    float principal, rate, si, ci, amount;
    int time, i;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %d", &principal, &rate, &time);

    si = (principal * rate * time) / 100;

    amount = principal;
    for (i = 1; i <= time; i++) {
        amount = amount * (1 + rate / 100);
    }
    ci = amount - principal;

    printf("Simple Interest=%f, Compound Interest=%f\n", si, ci);

    return 0;
}