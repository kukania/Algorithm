#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
using namespace std;
int main() {
	int temp;
	int cnt=0;
	scanf("%d", &temp);
	for (int i = 1; i <= temp; i++) {
		for (int j = i; i*j <= temp; j++) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
}