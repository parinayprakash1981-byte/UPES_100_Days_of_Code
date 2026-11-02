
/*
Q124: Copy content from source file to destination file
using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt
Content: Learning C File Handling

Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[50], destinationName[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return 0;
    }

    destination = fopen(destinationName, "w");

    if(destination == NULL)
    {
        printf("Destination file cannot be created");
        fclose(source);
        return 0;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to destination.txt");

    return 0;
}
