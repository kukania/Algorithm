#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int input;
	cin >> input;
	int temp = pow(2.0, input);
	long long int res = pow(temp + 1, 2);
	cout << res<< endl;
}