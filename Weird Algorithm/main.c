#include <stdio.h>
#include <stdbool.h>

int main() {
    long long a;
    scanf("%lld", &a);
    
    while (true) {
        printf("%lld ", a);
        
        if(a==1) {
            break; // run until it equals 1
        }
        
        if(a%2==0) {
            a = a/2; // if even, divide by two

        } else {
            a = (a*3) + 1; // if odd, multiply by 3 and add 1
        }
        
    }
}