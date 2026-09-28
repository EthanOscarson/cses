#include <stdio.h>


long long findValue (long long x, long long y) {
    if (x>y) {
        if (x%2==1) {
            return (x << 1) - y - 1;
        } else {
            return ((x-1) << 1) + y;
        }
    } else if (y>x) {
        if (x%2==0) {
            return (y << 1) - x - 1;
        } else {
            return ((y-1) << 1) + x;
        }
    } else {
        return (x << 1) - x + 1;
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
