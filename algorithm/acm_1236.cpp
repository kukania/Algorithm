#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int arr[51][51];
int main() {
	int a, b;
	string s;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		cin >> s;
		for (int j = 0; j < b; j++) {
			arr[i][j] = s[j];
		}
	}
	int maxA=0;
	int maxB=0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (arr[i][j] == 'X') {
				maxA++;
				break;
			}
		}
	}
	
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			if (arr[j][i] == 'X') {
				maxB++;
				break;
			}
		}
	}
	int num =a-maxA >b-maxB ?a-maxA :b-maxB;
	printf("%d\n", num);
}