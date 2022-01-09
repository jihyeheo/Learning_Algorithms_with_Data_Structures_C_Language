#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    return 0;
}
