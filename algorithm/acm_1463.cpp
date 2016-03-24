#include<iostream>
#include<vector>
using namespace std;
int main() {
	int input;
	cin >> input;
	vector<int> dp;
	dp.assign(input+1,1000001 );
	dp[1] = 0;
	for (int i = 1; i <= input; i++) {
		if (i % 3 == 0) {
			if ( dp[i / 3] + 1 < dp[i])
				dp[i] = dp[i / 3] + 1;
		}
		if (i % 2 == 0) {
			if (dp[i / 2] + 1 < dp[i])
				dp[i] = dp[i / 2] + 1;
		}
		if (dp[i - 1] + 1 < dp[i])
			dp[i] = dp[i - 1] + 1;
	}
	cout << dp[input]<< endl;
	return 0;
}