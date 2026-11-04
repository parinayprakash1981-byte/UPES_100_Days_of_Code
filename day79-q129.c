
/*
Q129: Read integers from numbers.txt.
Calculate their sum and average.

Sample Test Cases:
Input 1:
File: numbers.txt
Content: 10 20 30 40 50

Output 1:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while(fscanf(fp, "%d", &num) != EOF)
    {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
