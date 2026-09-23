#include <stdio.h>

int main(void) {
    long long n = 0;
    scanf("%lld", &n);
    long long terminalN = (n * (n+1))/2;
    long long sum = 0;
    for(int i = 0; i < n-1; i++) {
        long long inputNumber = 0;
        scanf("%lld", &inputNumber);
        sum += inputNumber;
    }
    long long missing = terminalN - sum;
    printf("%lld", missing);
}


