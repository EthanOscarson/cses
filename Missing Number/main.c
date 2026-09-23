// 9/22/26 Missing Number - 1 attempt

#include <stdio.h>

int main(void) {
    long long n = 0;
    scanf("%lld", &n);
    
    long long terminalN = (n * (n+1))/2; // formula for terminal, where 5? = 5+4+3+2+1
    long long sum = 0;

    // sum all numbers inputted
    for(int i = 0; i < n-1; i++) {
        long long inputNumber = 0;
        scanf("%lld", &inputNumber);
        sum += inputNumber;
    }
    
    long long missing = terminalN - sum; // find missing by subtracting the terminal from the actual sum
    printf("%lld", missing);
}


