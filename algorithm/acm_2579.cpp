#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int dp[302];
	int dp2[302];
	memset(dp, 0, sizeof(dp));
	memset(dp2, 0, sizeof(dp));
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> dp[i];
		dp2[i] = dp[i];
	}
	int temp[4] = { 0, };
	dp2[1] += dp[0];
	for (int i =2; i < num; i++) {
		dp[i] += dp2[i - 2]>dp[i - 2] ? dp2[i - 2] : dp[i - 2];
		dp2[i] += dp[i - 1];
	}
	int returnV = dp[num - 1] > dp2[num - 1] ? dp[num - 1] : dp2[num - 1];
	cout << returnV << endl;
	return 0;
}