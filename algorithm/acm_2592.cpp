#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>arr;
	arr.assign(101, 0);
	int arr2[10] = { 0, };
	int sum = 0;
	int temp;
	for (int i = 0; i < 10; i++) {
		cin >> temp;
		sum += temp;
		arr[temp / 10]++;
	}
	cout << sum / 10 << endl;
	int max = 0;
	int out;
	for (int i = 0; i <=100; i++) {
		if (max < arr[i]) {
			max = arr[i];
			out = i;
		}
	}
	cout << out * 10 << endl;
	return 0;
}