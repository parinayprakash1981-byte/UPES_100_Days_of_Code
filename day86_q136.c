
/*
Q136: Use enum to represent menu choices
(ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20

Output 1:
30
*/

#include <stdio.h>

int main()
{
    enum operation
    {
        ADD, SUBTRACT, MULTIPLY
    };

    int choice, a, b;

    printf("Enter choice (0=ADD, 1=SUBTRACT, 2=MULTIPLY): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
