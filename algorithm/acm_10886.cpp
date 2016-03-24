#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	int cnt=0;
	for (int i = 0; i < input; i++) {
		int temp = 0;
		cin >> temp;
		temp ? cnt++ : 0;
	}
	cout << (cnt > input - cnt ? "Junhee is cute!" : "Junhee is not cute!") << endl;
}