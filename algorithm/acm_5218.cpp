#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int testCase;
	scanf("%d", &testCase);
	string input, input2;
	while (testCase--) {
		cin >> input >> input2;
		printf("Distances: ");
		for (int i = 0; i < input.size(); i++) {
			int temp = input2[i] - input[i];
			temp = temp < 0 ? temp + 26 : temp;
			printf("%d ", temp);
		}
		printf("\n");
	}
}