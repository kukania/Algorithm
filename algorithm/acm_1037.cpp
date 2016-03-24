#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> arr;
	int num;
	cin >> num;
	arr.assign(num, num);
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int ans = arr[0] * arr[arr.size() - 1];
	cout << ans<<endl;
	return 0;
}