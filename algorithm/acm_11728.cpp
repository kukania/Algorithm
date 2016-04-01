#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int arr1[1000001];
int arr2[1000001];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	sort(&arr1[0], &arr1[n]);
	sort(&arr2[0], &arr2[m]);
	int cnt1 = 0; int cnt2 = 0;
	while (1) {
		int temp = 0;
		if (cnt1 < n && cnt2<m) {
			if (arr1[cnt1] < arr2[cnt2]) {
				temp = arr1[cnt1];
				cnt1++;
			}
			else{
				temp = arr2[cnt2];
				cnt2++;
			}
		}
		else if (cnt1 >= n && cnt2 < m) {
			temp = arr2[cnt2];
			cnt2++;
		}
		else if (cnt2 >= m && cnt1 < n) {
			temp = arr1[cnt1];
			cnt1++;
		}
		else
			break;
		printf("%d ", temp);
	}
	printf("\n");
}