#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d\n", (a + b) % c);
    printf("%d\n", ((a % c) + (b%c))%c);
    printf("%d\n", (a * b)%c);
    printf("%d\n", ((a % c) * (b % c)) % c);

    return 0;
}
