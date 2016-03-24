#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr[100];
	int testCase;
	cin >> testCase;
	while (testCase--) {
		string input;
		cin >> input;
		arr[0] = input[0] == 'O' ? 1 : 0;
		for (int i = 1; i < input.size(); i++) {
			if (input[i] == 'O') {
				arr[i] = arr[i - 1] + 1;
			}
			else {
				arr[i] = 0;
			}
		}
		int sum = 0;
		for (int i = 0; i < input.size(); i++) {
			sum += arr[i];
		}
		cout << sum << endl;
	}
	return 0;
}