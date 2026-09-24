// 9/24/26 Repetitions - 1 attempt
// Improvment steps:
// 1. Don't get tunnel vision on one solution, new approach is probably easier

#include <stdio.h>

int main (void) {
    char currentChar;
    int currentLength = 0;
    
    int longestLength = 0;
    char newChar;
    while (scanf("%c", &newChar) == 1) {
        
        if (newChar != currentChar) {
            currentLength = 1;
            currentChar = newChar;
        } else {
            currentLength++;
        }
        if (currentLength > longestLength) {
            longestLength = currentLength;
        }
    }
    printf("%d", longestLength);
}