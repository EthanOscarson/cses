#include <stdio.h>
#include <stdbool.h>

int main() {
    long long a;
    scanf("%lld", &a);
    while (true) {
        printf("%lld ", a);
        if(a==1) {
            break;
        }
        if(a%2==0) {
            a = a/2;
        } else {
            a = (a*3) + 1;
        }
        
    }
}