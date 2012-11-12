/*
Exam 1-12
Write a program to print each word in separate line
*/
#include <stdio.h>
#include <stdlib.h>

#define IN  1
#define OUT 0

int main()
{
    char input;
    int state = OUT;
    long charNum=0;
    long wordNum=0;
    long lineNum=0;

    while((input = getchar()) != EOF) {
        charNum++;
        if(input == '\n') lineNum++;

        if(state == IN) {
            if((input == ' ') || (input == '\t') || (input == '\n')) {
                putchar('\n');
                state = OUT;
                wordNum++;
            }
            else {
                putchar(input);
            }
        }
        else {
            if((input == ' ') || (input == '\t') || (input == '\n')) {
                continue;
            }
            else {
                putchar(input);
                state = IN;
            }
        }
    }

    printf("char: %ld\n", charNum);
    printf("word: %ld\n", wordNum);
    printf("line: %ld\n", lineNum);
    return 0;
}
