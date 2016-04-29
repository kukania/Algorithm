#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int N, k;
int arr[5000000];
double sum;
long long s2;
int ans;
int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sort(arr, arr + N);
	s2 = sum;
	if (s2 % N == N / 2) {
		ans = s2 / N;
	}
	else {
		sum /= N;
		sum += 0.5;
		ans = sum;
	}

	printf("%d %d\n", arr[(N - 1) / 2], ans);
}