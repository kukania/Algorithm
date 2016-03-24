#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int clSize = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ':')
			clSize++;
	}
	clSize = 7 - clSize;
	for (int i = 0; i < input.size() - 1; i++) {
		if (input[i] == ':' && input[i + 1] == ':') {
			string str = "0";
			for (int j = 0; j < clSize; j++) {
				str += ":0";
			}
			input.insert(i + 1, str);
		}
	}
	bool flag = false;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ':') {
			int temp = i;
			int cnt = 0;
			while (temp != 0 && input[--temp] != ':') {
				cnt++;
			}
			string str = "";
			for (int j = 0; j < 4 - cnt; j++)
				str += '0';
			if (!flag) {
				input.insert(temp, str);
				flag = true;
			}
			else {
				input.insert(temp + 1, str);
			}
			i += 4 - cnt;
		}
	}
	int cnt = 0;
	for (int i = input.size() - 1; i > 0; i--) {

		if (input[i] != ':')
			cnt++;
		else {
			string str = "";
			for (int j = 0; j < 4 - cnt; j++)
				str += '0';
			input.insert(i + 1, str);
			break;
		}
	}
	cout << input << endl;
	
	return 0;
}