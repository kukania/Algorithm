#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int testCase;
	scanf("%d", &testCase);
	float value[] = { 350.34 ,230.90,190.55 ,125.30,180.90 };
	int num;
	while (testCase--) {
		double sum = 0.0;
		for (int i = 0; i < 5; i++) {
			scanf("%d", &num);
			sum += num*value[i];
		}
		printf("$%.2f\n", sum);
	}
}