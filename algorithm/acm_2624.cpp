#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<cstdio>
using namespace std;
struct Content {
	int val, num;
};
int dp[10001];
int main() {
	int value, input;
	scanf("%d %d", &value, &input);
	int sum = 0;
	dp[0] = 1;
	for (int i = 0; i < input; i++) {
		int val, num;
		scanf("%d %d", &val, &num);
		for (int j = sum; j >=0; j--) {
			for (int k = 1; k <=num; k++) {
				if (j + k*val > value)break;
				dp[j + k*val] += dp[j];
			}
		}
		sum += val*num;
		if (sum > value) sum = value;
	}
	printf("%d\n", dp[value]);
}