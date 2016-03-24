#include<iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int a[100] = { 0, };
	int dp[10001] = { 0, };
	for (int i = 1; i <= k; i++)
		dp[i] = 999999;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		dp[a[i]] = 1;
	}
	for (int i =1; i <=k; i++) {
		for (int j = 0; j < n; j++) {
			if (i - a[j] < 0)
				continue;
			if (dp[i - a[j]] + 1 < dp[i])
				dp[i] = dp[i - a[j]] + 1;
		}
	}
	cout << dp[k]<<endl;
	return 0;
}