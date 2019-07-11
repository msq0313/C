#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    return b == 0 ? a : gcd (b, a%b);
}

int main()
{
    int a1, b1, a2, b2, n;
    scanf ("%d/%d %d/%d", &a1, &b1, &a2, &b2);
    n = b1/gcd(b1, b2)*b2;
    if (n/b1*a1 > n/b2*a2){
        printf ("%d/%d > %d/%d", a1, b1, a2, b2);
    }
    else if (n/b1*a1 < n/b2*a2){
        printf ("%d/%d < %d/%d", a1, b1, a2, b2);
    }
    else {
        printf ("%d/%d = %d/%d", a1, b1, a2, b2);
    }
    return 0;
}
