#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char arr[101];
int main() {
	int testCase;
	int result = 0;
	scanf("%d", &testCase);
	scanf("%s", arr);
	for (int i = 0; i < testCase; i++) {
		result += arr[i] - '0';
	}
	printf("%d\n", result);
}