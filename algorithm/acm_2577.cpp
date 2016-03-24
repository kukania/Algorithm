#include<iostream>
#include<string>
using namespace std;
int main() {
	int sum;
	int a, b, c;
	int arr2[10] = { 0, };
	string arr;
	cin >> a >> b >> c;
	sum = a*b*c;
	int temp = 10;
	while (sum / temp) {
		arr.push_back(sum%temp+'0');
		sum /= 10;
	}
	arr.push_back(sum%temp + '0');
	for (int i = 0; i < arr.size(); i++)
		arr2[arr[i] - '0']++;
	for (int i = 0; i < 10; i++)
		cout << arr2[i] << endl;
	return 0;
}