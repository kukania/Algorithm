#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int i = 1; i <=num-1; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = (num - i) * 2; j > 0; j--)
			cout << " ";
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i < num*2; i++)
		cout << "*";
	cout << endl;
	for (int i = 1; i <= num - 1; i++) {
		for (int j = num - i; j > 0; j--)
			cout << "*";
		for (int j = i * 2; j >0; j--)
			cout << " ";
		for (int j = num - i; j > 0; j--)
			cout << "*";
		cout << endl;
	}
}