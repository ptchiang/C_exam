/*
Exam 1-10
Write a program to change tab to '\t', backspace to '\b', slash to '\\'
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;

    while((input=getchar()) != EOF) {
        switch(input) {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(input);
                break;
        }
    }

    return 0;
}
