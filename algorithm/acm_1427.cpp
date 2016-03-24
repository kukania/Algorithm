#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string input;
	cin >> input;
	sort(input.begin(), input.end());
	for (int i = input.size() - 1; i >= 0; i--) {
		cout << input[i];
	}
	cout << endl;
	return 0;
}