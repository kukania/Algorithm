#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = i; j >1; j--) {
			cout << " ";
		}
		for (int j = 2 * (num-i+1)- 1; j > 0; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}