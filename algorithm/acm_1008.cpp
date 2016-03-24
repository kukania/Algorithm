#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double a=0, b=0;
	scanf("%d %d", &a, &b);
	printf("%.9f\n", (double)(a / b));
	return 0;
}