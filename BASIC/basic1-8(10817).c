#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    
    if ((a >= b && b >= c) || (c >= b && b >= a)) {
        printf("%d", b);
    }
    else if ((b >= a && a >= c) || (c >= a && a >= b)) {
        printf("%d", a);
    }
    else if ((a >= c && c >= b) || (b >= c && c >= a)) {
        printf("%d", c);
    }


    return 0;
}
