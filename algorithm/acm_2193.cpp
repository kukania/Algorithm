#include<iostream>
using namespace std;

long long int memory[99] = { 1,1,2,3,5,8 };
int main() {
	int input;
	cin >> input;
	for (int i = 6; i < 99; i++) {
		memory[i] = memory[i - 1] + memory[i - 2];
	}
	cout << memory[input -1];
	return 0;
}