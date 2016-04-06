#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int arr[1101];
struct Str {
	int value;
	int e;
};
Str in[21];
int main() {
	int value;
	int m;
	scanf("%d", &value);
	scanf("%d", &m);
	for (int i = 0; i < 1101; i++) arr[i] = 9999999999;
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		in[i].value = a; in[i].e = b;
	}
	arr[0] = 0;
	for (int i = 0; i <= 1101; i++) {
		for (int j = 0; j < m; j++) {
			if (i - in[j].e < 0)
				continue;
			else {
				if (arr[i - in[j].e] + in[j].value < arr[i])
					arr[i] = arr[i - in[j].e] + in[j].value;
			}
		}
	}

	int ans = arr[value];
	for (int i = value; i < 1101; i++) {
		if (ans > arr[i])
			ans = arr[i];
	}
	printf("%d\n", ans);
}