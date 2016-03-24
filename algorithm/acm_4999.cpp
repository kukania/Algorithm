#include<string>
#include<iostream>
using namespace std;
int main() {
	string input1, input2;
	cin >> input1 >> input2;
	if (input1.length() < input2.length())
		cout << "no" << endl;
	else
		cout << "go" << endl;
}