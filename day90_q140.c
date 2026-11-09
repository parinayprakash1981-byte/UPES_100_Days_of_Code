
/*
Q140: Define a struct with enum Gender
and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE

Output 1:
Male
*/

#include <stdio.h>

enum Gender
{
    MALE, FEMALE
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    int choice;

    printf("Enter gender (0=MALE, 1=FEMALE): ");
    scanf("%d", &choice);

    p.gender = choice;

    if(p.gender == MALE)
        printf("Male");
    else if(p.gender == FEMALE)
        printf("Female");
    else
        printf("Invalid gender");

    return 0;
}
