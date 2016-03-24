#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	for (int i = 1; i <=input - 1; i++) {
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i <= input; i++)
		cout << "*";
	cout << endl;
	for (int i = input-1; i >=1; i--) {
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
}