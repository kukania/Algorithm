#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int arr[50];
int arr2[6];
int arrlen;
void set(int index, int num) {
	if (arrlen - index < 6 - num)
		return;
	if (num == 6) {
		for (int i = 0; i < 6; i++)
			printf("%d ", arr2[i]);
		printf("\n");
	}
	else {
		for (int i =index; i < arrlen; i++) {
			arr2[num] = arr[i];
			set(i + 1, num + 1);
		}
	}
}
int main() {
	while (1) {
		scanf("%d", &arrlen);
		if (arrlen == 0)
			break;
		else {
			for (int i = 0; i < arrlen; i++)
				scanf("%d", &arr[i]);
			set(0, 0);
			printf("\n");
		}
	}
}