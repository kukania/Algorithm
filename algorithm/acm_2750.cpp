#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;
	vector<int> arr;
	arr.assign(num, 0);
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}
}