#include<iostream>
using namespace std;
int main() {
	int hour, min;
	cin >> hour >> min;
	int input;
	cin >> input;
	min += input;
	hour += min / 60;
	min %= 60;
	hour %= 24;
	cout << hour << " " << min << endl;
	return 0;
}