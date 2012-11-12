/*
Exam 1-13
Write a program to count size of word in input and print a diagram
*/
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define IN  1
#define OUT 0
#define MAX_WORD_LEN 100

int main()
{
    char input;
    int state = OUT;
    int len=0;
    int wordNum=0;
    int wordlen[MAX_WORD_LEN];

    memset(wordlen, 0, sizeof(int)*MAX_WORD_LEN);

    while((input = getchar()) != EOF) {
        if(state == IN) {
            if((input == ' ') || (input == '\t') || (input == '\n')) {
                state = OUT;
                wordNum++;
                wordlen[len-1]++;
                len=0;
            }
            else {
                len++;
            }
        }
        else {
            if((input == ' ') || (input == '\t') || (input == '\n')) {
                continue;
            }
            else {
                state = IN;
                len++;
            }
        }
    }

    printf("------------------------------\n");
    printf("word count: %d\n", wordNum);
    printf("------------------------------\n");
    for(int i=0; i<MAX_WORD_LEN; i++){
        if(wordlen[i] != 0) {
            printf("%3d | ", i+1);
            for(int j=0; j<wordlen[i]; j++) {
                printf("*");
            }
            printf(" %d\n", wordlen[i]);
        }
    }
    return 0;
}
