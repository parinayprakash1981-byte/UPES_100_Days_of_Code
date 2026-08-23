
/*
Question 22: Profit or Loss Percentage

Write a program to find profit or loss percentage
given cost price and selling price.

Sample Test Cases:

Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

#include <stdio.h>

int main() {
    int cp, sp, profit, loss;

    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Profit %d%%\n", profit * 100 / cp);
    }
    else if (cp > sp) {
        loss = cp - sp;
        printf("Loss %d%%\n", loss * 100 / cp);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
