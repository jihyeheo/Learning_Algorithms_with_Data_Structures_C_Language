#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }
   
    return 0;
}