#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int a,b;
	int i;
	int count;
	int c=0;

	scanf("%d %d", &a, &b);
	count = 0;
	for (i = 1; i <= a; i++) 
	{
		if (a % i == 0)
			count++;
		if (count == b)
			break;
	}
		if (count >= b)
			printf("%d", i);
		else
			printf("0");
		
	
	

	return 0;

}