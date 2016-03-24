#include<iostream>
#include<vector>
using namespace std;
int main() {
	int num;
	cin >> num;
	int ans;
	cin >> ans;
	vector<int> arr;
	arr.assign(num, 0);
	int first = 0;
	int sum = 0;
	int cnt = 0;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		sum += arr[i];
		if (sum == ans) {
			cnt++;
			sum -= arr[first];
			first++;
		}
		else if (sum > ans) {
			while (sum > ans) {
				sum -= arr[first];
				first++;
				if (sum == ans) {
					cnt++;
					sum -= arr[first];
					first++;
				}
			}
		}
	}
	cout << cnt << endl;
}
