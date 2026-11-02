
/*
Q121: Create a text file named info.txt in write mode.
Take name and age as input and write them using fprintf().

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23

Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be created");
        return 0;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
