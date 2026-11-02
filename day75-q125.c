
/*
Q125: Open an existing file in append mode
and add a new line of text.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content: Hello world)
User Input: This is appended text.

Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];
    int i = 0;

    printf("Enter new text: ");
    getchar();

    while((text[i] = getchar()) != '\n')
    {
        i++;
    }

    text[i] = '\0';

    fp = fopen("data.txt", "a");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 0;
    }

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
