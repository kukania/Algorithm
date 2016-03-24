#include<iostream>
using namespace std;
int main() {
	int input;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		sum += input*input;
	}
	cout << sum % 10 << endl;
	return 0;
}