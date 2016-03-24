#include<iostream>
#include<string>
using namespace std;
int main() {
	int input;
	cin >> input;
	string temp;
	for (int i = 1; i < 1000001; i++) {
		temp.erase();
		temp = ""+i;
		int sum = 0;
		for (int j = 0; j < temp.length(); j++)
			sum += temp[j];
		if (sum + i == input) {
			cout << temp;
			return 0;
		}
		if (i == 1000000)
			cout << "0" << endl;
	}
}