#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
char store[40] = { 0, };
int len = 1;
void hanoi(int start, int last, int remain) {
	if (remain <= 1)
		printf("%d %d\n", start, last);
	else {
		int temp = 6 - (start + last);
		hanoi(start, temp, remain - 1);
		printf("%d %d\n", start, last);
		hanoi(temp, last, remain - 1);
	}
}
void upperCase(int index) {
	store[index] -= '0';
	if (store[index] > 9) {
		if (store[index + 1] == 0) {
			store[index + 1] = '1';
			len++;
		}
		else
			store[index + 1]++;
		upperCase(index + 1);
		store[index] -= 10;
	}
	store[index] += '0';
}
int main() {
	int num;
	cin >> num;
	store[0] = '1';
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < len; j++) {
			if (store[j] != 0) {
				store[j] -= '0';
				store[j] *= 2;
				store[j] += '0';
			}
			else break;
		}
		for (int j = 0; j < len; j++) {
			if (store[j] != 0) {
				upperCase(j);
			}
			else break;
		}
	}
	for (int i = len; i >= 0; i--) {
		if (i == 0)
			cout << (char)(store[i] - 1);
		else if (store[i] != 0)
			cout << store[i];
	}
	cout << endl;
	if (num <= 20)
		hanoi(1, 3, num);
	return 0;
}