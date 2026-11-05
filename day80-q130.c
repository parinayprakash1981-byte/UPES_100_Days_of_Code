
/*
Q130: Store student records (name, roll number, marks)
using fprintf(). Read them using fscanf().

Sample Test Cases:
Input 1:
Student 1: Asha, 101, 85
Student 2: Ravi, 102, 92

Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n, i;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be created");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 0;
    }

    while(fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}
