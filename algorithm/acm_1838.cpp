#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int A[500001],B[500001];
int BinarySearch(int size, int data) {
	int low = 0, high = size - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (B[mid] > data) {
			high = mid - 1;
		}
		else if (B[mid] < data) {
			low = mid + 1;
		}
		else return mid;
	}
	return -1;
}
int main() {
	int i, N, sw, j, temp;
	int max = 0;
	cin >> N;
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
		B[i] = A[i];
	}
	sort(&B[0],&B[N]);
	for (int i = 0; i < N; i++) {
		temp = BinarySearch(N, A[i]);
		if (i - temp > 0) {
			if (max < i - temp)
				max = i - temp;
		}
	}
	printf("%d\n", max);
}
