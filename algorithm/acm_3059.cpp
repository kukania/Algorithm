#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int arr[26];
		memset(arr, 0, sizeof(arr));
		string input;
		cin >> input;
		for (int i = 0; i < input.size(); i++) {
			arr[input[i] - 'A']++;
		}
		int sum = 0;
		for (int i = 0; i < 26; i++) {
			if (arr[i] == 0) {
				sum += i + 65;
			}
		}
		cout << sum << endl;
	}
}