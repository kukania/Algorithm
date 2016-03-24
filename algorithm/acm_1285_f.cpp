#include<iostream>
using namespace std;
int n;
int arr[21][21];
int main() {
	cin >> n;
	char input;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> input;
			if (input == 'T')
				arr[i][j] = true;
			else
				arr[i][j] = false;
		}
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i][j])
				cnt++;
		}
		if (cnt > n / 2) {
			for (int j = 0; j < n; j++) {
				arr[i][j] = !arr[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[j][i])
				cnt++;
		}
		if (cnt > n  / 2) {
			for (int j = 0; j < n; j++) {
				arr[j][i] = !arr[i][j];
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j])
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}