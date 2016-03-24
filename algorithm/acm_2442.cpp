#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	for (int j = 1; j <=input; j++) {
		for (int i = input - j; i > 0; i--)
			cout << " ";
		for (int i = 0; i <j * 2 - 1; i++)
			cout << "*";
		cout << endl;
	}
}