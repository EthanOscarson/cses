// 9/24/26 Permutations - 3 attempts
// Improvement steps:
// 1. Ask the important questions, like order and verifying all edge cases. I should've spent more time on ordering the loops and verifying which ones were possible.

#include <stdio.h>

int main (void) {
    int n = 0;
    scanf("%d", &n);
    if (n == 1) {
        printf("1");
        return 0;
    }
    if (n < 4) {
        printf("NO SOLUTION");
        return 0;
    } else {
        for(int i = 0; i < n/2; i++) {
            printf("%d ", i*2+2); // print even numbers
        }
        for(int i = 0; i < (n+1)/2; i++) {
            printf("%d ", i*2+1); // print odd numbers
        }
        
    }
    return 0;
}