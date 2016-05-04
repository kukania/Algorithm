#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int x, rt, a[30];
int main() {
	scanf("%d", &x);
	rt = sqrt(x);
	for (int i = 2; i <= rt; i++) {
		int sz = 0, t = x, flag = 1;
		do {
			a[sz++] = t%i;
		} while (t /= i);
		for (int j = 0; j < sz; j++)
			if (a[j] != a[sz - 1 - j]) flag = 0;
		if (flag) printf("%d\n", i);
	}
	if (rt*(rt + 2) == x) printf("%d\n", rt + 1);
	for (int i = rt - 1; i >0; i--)
		if (x % i == 0) printf("%d\n", x / i - 1);
	return 0;
}