/*
Exam 1-8
Write a program to calculate the number of space, tab and newline
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long spaceNum=0;
    long tabNum=0;
    long newlineNum=0;

    char input;

    while((input=getchar()) != EOF) {
        switch(input) {
            case ' ':
                spaceNum++; break;
            case '\t':
                tabNum++; break;
            case '\n':
                newlineNum++; break;
        }
    }

    printf("space:    %ld\n", spaceNum);
    printf("tab:      %ld\n", tabNum);
    printf("new line: %ld\n", newlineNum);

    return 0;
}
