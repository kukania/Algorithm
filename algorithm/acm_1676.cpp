#include<iostream>
using namespace std;
int main() {
	int arr[] = { 5,25,125 };
	int num;
	cin >> num;
	int sum = 0;
	sum += num / arr[0];
	sum += num / arr[1];
	sum += num / arr[2];
	cout << sum << endl;
}