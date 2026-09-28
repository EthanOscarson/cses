#include <stdio.h>
#include <math.h>

long long findValue (long long x, long long y) {
    if (x>y) {
        if (x%2==1) {
            return pow(x, 2) - y - 1;
        } else {
            return pow(x-1, 2) + y;
        }
    } else if (y>x) {
        if (x%2==0) {
            return pow(y, 2) - x - 1;
        } else {
            return pow(y-1, 2) + x;
        }
    } else {
        return pow(x, 2) - x + 1;
    }
    // Finding the number is dependent on if x or y is largest or equal to each other and if they are even or odd. 
    // See solution.jpeg for thought process
}

int main (void) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int y = 0;
        int x = 0;
        scanf("%d", &y);
        scanf("%d", &x);
        printf("%lld\n", findValue((long long)x, (long long)y));
    }
}
