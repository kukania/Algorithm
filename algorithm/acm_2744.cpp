#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] >= 'a' && input[i] <= 'z')
			input[i] = input[i] - 'a' + 'A';
		else
			input[i] = input[i] - 'A' + 'a';
	}
	cout << input << endl;
}