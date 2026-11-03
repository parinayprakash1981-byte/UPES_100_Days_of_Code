
/*
Q127: Read text from input.txt, convert lowercase
letters to uppercase and write to output.txt.

Sample Test Cases:
Input 1:
Input File: Hello World
C programming

Output 1:
Output File: HELLO WORLD
C PROGRAMMING
*/

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");

    if(fp1 == NULL)
    {
        printf("Input file not found");
        return 0;
    }

    fp2 = fopen("output.txt", "w");

    if(fp2 == NULL)
    {
        printf("Output file cannot be created");
        fclose(fp1);
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully");

    return 0;
}
