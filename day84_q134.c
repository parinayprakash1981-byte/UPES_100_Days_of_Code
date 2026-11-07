
/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT
and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE

Output 1:
Operation failed
*/

#include <stdio.h>

int main()
{
    enum status
    {
        SUCCESS, FAILURE, TIMEOUT
    };

    int choice;

    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;

        default:
            printf("Invalid status");
    }

    return 0;
}
