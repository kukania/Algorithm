#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int arr[21];
void hanoi(int start, int end, int num) {
	if (num == 0) {
		printf("%d %d\n", start, end);
		return;
	}
	int mid = 6 - (start + end);
	hanoi(start, mid, num - 1);
	printf("%d %d\n", start, end);
	hanoi(mid, end, num - 1);
}
int main() {
	int num;
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < 21; i++) {
		arr[i] = arr[i - 1] * 2 + 1;
	}
	scanf("%d", &num);
	printf("%d\n", arr[num]);
	hanoi(1, 3, num-1);
	
}