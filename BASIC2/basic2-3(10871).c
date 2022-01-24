#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int n, x;
	int i;
	int s[10000];

	scanf("%d %d", &n, &x);

	for (i = 1;i <= n;i++) {
		scanf("%d", &s[i]);
		if (s[i] < x)
			printf("%d ", s[i]);
	}

	return 0;
}