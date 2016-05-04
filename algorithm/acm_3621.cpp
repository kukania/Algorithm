#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
using namespace std;
int arr[100001];
int main() {
	int nN, nP;
	scanf("%d %d", &nN, &nP);
	for (int i = 0; i < nN; i++) {
		int temp;
		scanf("%d", &temp);
		arr[temp]++;
	}
	
	int cnt = 0;
	for (int i = 0; i < nN; i++) {
		if (arr[i] > nP) {
			int temp = arr[i];
			int temp2 = 0;
			while (temp>nP) {
				temp2= temp%nP;
				temp =  temp/ nP;
				cnt += temp;
				temp += temp2;
			}
		}
	}
	
	printf("%d\n", cnt);
}
