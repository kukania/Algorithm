#include<iostream>
using namespace std;

int main() {
	int n, m;
	int matrix[301][301] = { 0, };
	int dp[301][301] = { 0 };
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= m; i++) {
			matrix[k][i] = matrix[k][i - 1] + matrix[k][i];
		}
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= k; j++) {
				dp[k][i] += matrix[j][i];
			}
		}
	}
	int testCase;
	cin >> testCase;
	for (int T = 0; T < testCase; T++) {
		int Gx, Gy, Dx, Dy;
		cin >> Gx >> Gy >> Dx >> Dy;
		int temp = dp[Dx][Dy];
		temp -= dp[Dx][Gy - 1];
		temp -= dp[Gx - 1][Dy];
		temp += dp[Gx - 1][Gy - 1];
		cout << temp << endl;
	}
	return 0;
}