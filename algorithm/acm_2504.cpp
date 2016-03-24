#include<iostream>
#include<string>
#include<stack>
using namespace std;
string input;
int main() {
	cin >> input;
	int cnt = 0;
	stack<int>arr;
	stack<char>arr2;
	arr.push(0);
	int cntA=0;
	int cntB = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(' )  {
			arr.push(0);
			arr2.push('(');
		}
		else if (input[i] == '[') {
			arr.push(0);
			arr2.push('[');
		}
		else if (input[i] == ')') {
			if (arr2.empty() || arr2.top() != '(') {
				cout << 0 << endl;
				return 0;
			}
			int num = arr.top() == 0 ? 2 : arr.top() * 2;
			arr.pop();
			int num2 = arr.top();
			arr.pop();
			arr.push(num2 + num);
			arr2.pop();
		}
		else if (input[i] == ']') {
			if (arr2.empty() || arr2.top() != '[') {
				cout << 0 << endl;
				return 0;
			}
			int num = arr.top() == 0 ? 3 : arr.top() * 3;
			arr.pop();
			int num2 = arr.top();
			arr.pop();
			arr.push(num2 + num);
			arr2.pop();
		}
	}
	if (!arr2.empty())
		cout << 0 << endl;
	else
		cout << arr.top() << endl;
	return 0;
}