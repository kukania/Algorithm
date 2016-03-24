#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool func(int a, int b) { return a >b; }
int main() {
	int dp[10001];
	int dp2[10001];
	memset(dp, 0, sizeof(dp));
	memset(dp2, 0, sizeof(dp));
	int input;
	cin >> input;
	for (int i = 1; i <= input; i++) {
		cin >> dp[i];
		dp2[i] = dp[i];
	}
	dp2[0] = dp[0] = 0;
	for (int i = 2; i <=input; i++) {
		dp[i] += dp[i - 2] > dp2[i - 2] ? dp[i - 2] : dp2[i - 2];
		dp2[i] += dp[i - 1];
	}
	sort(dp, dp+input+1,func);
	sort(dp2, dp2+input+1,func);
	int res = dp[0] > dp2[0] ? dp[0] : dp2[0];
	cout << res << endl;
	return 0;
}