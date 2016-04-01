#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int qselect(int *v, int len, int k)
{
#	define SWAP(a, b) { tmp = v[a]; v[a] = v[b]; v[b] = tmp; }
	int i, st, tmp;
	for (st = i = 0; i < len - 1; i++) {
		if (v[i] > v[len - 1]) continue;
		SWAP(i, st);
		st++;
	}
	SWAP(len - 1, st);

	return k == st ? v[st]
		: st > k ? qselect(v, st, k)
		: qselect(v + st, len - st, k - st);
}
int arr2[5000001];
int main(void)
{
	int num, result;
	scanf("%d %d", &num, &result);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr2[i]);
	}
	printf("%d\n", qselect(arr2, num, result-1));
	return 0;
}