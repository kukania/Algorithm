#include<iostream>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int input;
		cin >> input;
		int arr[1001];
		for (int i = 0; i <input; i++) {
			cin >> arr[i];
		}
		int cnt = 0;
		for (int i = 0; i < input-1; i++) {
			for (int j = 0; j <input-1-i; j++) {
				if (arr[j] >arr[j + 1]) {
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}