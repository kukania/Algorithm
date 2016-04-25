#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
int arr[1001];
char input[1002];
int main(){
	int page;
	scanf("%d", &page);
	while (page != 0) {
		for (int i = 0; i <= page; i++) arr[i] = 0;
		scanf("%s", &input);
		char *comma = strtok(input, ",");
		int a[2] = { 0, };
		
		while (comma != NULL) {
			a[0] = a[1] = 0;
			bool check = false;
			int index = 0;
			for (int i = 0; comma[i]!=NULL; i++) {
				if (check&& comma[i] >= '0' && comma[i] <= '9')
					a[index] *= 10;
				if (comma[i] >= '0' && comma[i] <= '9') {
					a[index] += comma[i] - '0';
					check = true;
				}
				if (comma[i] == '-') {
					index++; check = false;
				}
			}

			if (index == 1) {
				if (a[0] > a[1]) {
					comma = strtok(NULL, ",");
					continue;
				}
				else {
					for (int i = a[0]; i <= a[1]; i++)
						arr[i]++;
				}
			}
			else {
				arr[a[0]]++;
			}
			comma = strtok(NULL, ",");
		}

		int cnt = 0;
		for (int i = 1; i <=page; i++) {
			if (arr[i] != 0) cnt++;
		}
		printf("%d\n",cnt);
		scanf("%d", &page);
	};
}