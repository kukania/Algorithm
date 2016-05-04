#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
using namespace std;
bool arr[101];
int main() {
	int num,number;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		int temp;
		scanf("%d", &temp);
		if (temp) arr[i] = 1;
		else arr[i] = 0;
	}
	scanf("%d", &number);
	int male, p;
	while (number--) {
		scanf("%d %d", &male, &p);
		if (male == 1) {
			for (int i = p; i <=num; i+=p)
				arr[i]=!arr[i];
		}
		else {
			int cnt = 0;
			int index = 1;
			while (1) {
				if (p - index < 1 || p + index > num) break;
				if (arr[p - index] == arr[p + index]) {
					index++;
					cnt++;
				}
				else break;
			}
			arr[p] = !arr[p];
			for (int i = 1; i <=cnt; i++) {
				arr[p - i] = !arr[p - i];
				arr[p + i] = !arr[p + i];
			}
		}
	}
	for (int i = 1; i <=num; i++) {
		if (arr[i]) printf("1 ");
		else printf("0 ");
		if (i % 20 == 0) printf("\n");
	}
}