
/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST)
and display messages based on role.

Sample Test Cases:
Input 1:
GUEST

Output 1:
Welcome Guest!
*/

#include <stdio.h>

int main()
{
    enum roles
    {
        ADMIN, USER, GUEST
    };

    int choice;

    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;

        default:
            printf("Invalid role");
    }

    return 0;
}
