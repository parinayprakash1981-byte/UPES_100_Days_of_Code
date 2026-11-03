
/*
Q126: Ask the user for a filename.
Check if it exists by opening it in read mode.
If it exists, display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt

Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt

Output 2:
Error: File does not exist!
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[50];
    char line[100];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("Error: File does not exist!");
    }
    else
    {
        printf("File opened successfully.\n");

        while(fgets(line, 100, fp) != NULL)
        {
            printf("%s", line);
        }

        fclose(fp);
    }

    return 0;
}
