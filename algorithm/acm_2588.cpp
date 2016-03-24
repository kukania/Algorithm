#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	int input;
	int sum = 0;
	string arr;
	cin >> input >> arr;
	int j = 0;
	for (int i = arr.size() - 1; i >=0; i--) {
		cout << (arr[i] - '0')*input << endl;
		sum += (arr[i] - '0')*input*pow(10,j);
		j++;
	}
	cout << sum << endl;
	return 0;
}