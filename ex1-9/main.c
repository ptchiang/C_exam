/*
Exam 1-9
Write a program to copy input to output and strip duplicate space
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hasSpace=0;
    char input;

    while((input=getchar()) != EOF) {
        if(input == ' ') {
            hasSpace=1;
            continue;
        }
        else if(hasSpace) {
            putchar(' ');
            putchar(input);
            hasSpace=0;
        }
        else {
            putchar(input);
        }
    }
    return 0;
}
