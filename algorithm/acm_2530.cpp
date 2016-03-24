#include<iostream>
using namespace std;
int main() {
	int hour, min, sec;
	cin >> hour >> min >> sec;
	int input;
	cin >> input;
	sec += input;
	min += sec / 60;
	sec %= 60;
	hour += min / 60;
	min %= 60;
	hour %= 24;
	cout << hour << " " << min << " " << sec << endl;
	return 0;
}