
/*
Q123: Read a text file and count characters, words and lines.

Sample Test Cases:
Input 1:
File: sample.txt
Content: Hello world
This is C programming

Output 1:
Characters: 31
Words: 6
Lines: 2
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n')
            inWord = 0;
        else if(inWord == 0)
        {
            words++;
            inWord = 1;
        }
    }

    if(characters > 0 && ch != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
