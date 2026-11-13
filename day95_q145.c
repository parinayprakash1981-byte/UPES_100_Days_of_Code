
/*
Q145: Return a structure containing top student's
details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92

Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

struct Student topper(struct Student s[])
{
    int i, top = 0;

    for(i = 1; i < 3; i++)
    {
        if(s[i].marks > s[top].marks)
        {
            top = i;
        }
    }

    return s[top];
}

int main()
{
    struct Student s[3], result;
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    result = topper(s);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           result.name, result.roll_no, result.marks);

    return 0;
}
