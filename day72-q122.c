
/*
Q122: Open an existing file and read its contents using fgets().

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul
Age: 23)

Output 1:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while(fgets(line, 100, fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
