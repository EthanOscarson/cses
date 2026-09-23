// 9/23/26 Increasing Array - 5 attempts
// Improvement steps:
// 1. Calculate which variables need to be which length, don't just guess
// 2. Verify off by one in loops
// 3. Test program before submitting, closer to the real world

#include <stdio.h>

int main(void) {
    
    int n = 0;
    scanf("%d", &n);

    long long lastLargest = 0;
    scanf("%lld", &lastLargest); // first number always starts out as the largest

    long long moves = 0;

    for(int i = 0; i < n-1; i++) {
        long long current = 0;
        scanf("%lld", &current);

        if(current < lastLargest) {
            moves += lastLargest - current;
        } else {
            lastLargest = current;
        }
        
    }
    
    printf("%lld", moves);
    
    return 0;
}

