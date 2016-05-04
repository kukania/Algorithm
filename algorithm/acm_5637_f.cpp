#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<cstdio>
#define MAX 101
char buf[MAX];
int main() {
	int max = 0;
	int temp;
	while (scanf("%s",buf)!=NULL) {
		temp = strlen(buf);
		if (max < temp)
			max = temp;
	}
	printf("%d\n", max);
}