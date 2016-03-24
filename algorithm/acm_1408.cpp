#include<iostream>
#include<string>
using namespace std;
int main() {
	char input1[9], input2[9];
	cin >> input1 >> input2;
	int firstSec = ((input1[0] - '0') * 10 + input1[1] - '0') * 3600 +
		((input1[3] - '0') * 10 + input1[4] - '0') * 60 +
		((input1[6] - '0') * 10 + input1[7] - '0');
	int secSec= ((input2[0] - '0') * 10 + input2[1] - '0') * 3600 +
		((input2[3] - '0') * 10 + input2[4] - '0') * 60 +
		((input2[6] - '0') * 10 + input2[7] - '0');
	int time = secSec - firstSec;
	time += time < 0 ? 3600 : 0;
	int hour = time / 3600;
	hour %= 24; time %= 3600;
	int min = time / 60;
	time %= 60;
	int sec = time;
	if (hour < 10) cout << "0" << hour << ":";
	else cout << hour << ":";
	if (min < 10) cout << "0" << min << ":";
	else
		cout << min << ":";
	if (sec < 10) cout << "0" << sec;
	else
		cout << sec;
	cout << endl;
}