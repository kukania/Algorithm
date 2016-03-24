#include<string>
#include<iostream>
using namespace std;
int main() {
	string input;
	cin >> input;
	int temp = input.size();
	int flag = 0;
	for (int i = 0; i < temp; i++) {
		if (input[0] == '_' || ('A' <= input[0] && input[0] <= 'Z') || input[temp-1]=='_') {
			cout << "Error!" << endl;
			return 0;
		}
		if ('A' <= input[i] && input[i] <= 'Z') {
			if (flag==1 || flag==0) 
				flag = 1;
			else {
				cout << "Error!" << endl;
				return 0;
			}
		}
		else if (input[i] == '_') {
			if (input[i - 1] == '_') {
				cout << "Error!" << endl;
				return 0;
			}
			if(flag==2 || flag==0)
				flag = 2;	
			else {
				cout << "Error!" << endl;
				return 0;
			}
		}
	}
	string str;
	for (int i = 0; i < temp; i++) {
		if ('a' <= input[i] && input[i] <= 'z')
			str.push_back(input[i]);
		else {
			//java
			if(flag==1){
				str.push_back('_');
				str.push_back('a' + input[i] - 'A');
			}
			else {
				str.push_back('A' + input[i+1] - 'a');
				i++;
			}
		}
	}
	cout << str << endl;
	return 0;
}