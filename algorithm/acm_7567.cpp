#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int size = 10;
	char before = input[0];
	for (int i = 1; i < input.size(); i++) {
		if (before == input[i])
			size += 5;
		else {
			size += 10;
			before = input[i];
		}
	}
	cout << size << endl;
}
