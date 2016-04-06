#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	char arr[101];
	cin.getline(arr, 100);
	for (int i = 0; i < 101; i++) {
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] = 'a'+ (arr[i] - 'a' + 13) % 26;
		else if(arr[i]>='A' && arr[i]<='Z')
			arr[i] = 'A' + (arr[i] - 'A' + 13) % 26;
	}
	printf("%s\n", arr);
}
