#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = num - i; j >= 1; j--) {
			cout << " ";
		}
		for (int j = i; j >= 1; j--) {
			cout << "*";
		}	
		cout << endl;
	}
	for (int i = 1; i <num; i++) {
		for (int j = 1; j <=i; j++) {
			cout << " ";
		}
		for (int j = num-1; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
}