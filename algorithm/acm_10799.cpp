#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {
	stack<char> arr;
	string input;
	cin >> input;
	int cnt = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(') {
			if (input[i + 1] == ')' && i!=input.size()-1) {//·¹ÀÌÀú
				cnt += arr.size();
				i = i + 1;
				continue;
			}
			arr.push('(');
		}
		else {
			cnt++;
			arr.pop();
		}
	}
	cout << cnt << endl;
}