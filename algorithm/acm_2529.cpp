#include<iostream>
#include<string>
#include<vector>
using namespace std;
string maxS;
string minS;
string input;
int temp[] = { 0,1,2,3,4,5,6,7,8,9 };
int findmaxS(int index) {
	if (index == input.size()+1)
		return index;
	if (input[index-1] == '<') {
		for (int i =9; i > maxS[index-1]-'0'; i--) {
			if (temp[i] == -1)
				continue;
			else {
				maxS[index] = i+'0';
				temp[i] = -1;
				if (findmaxS(index + 1) == input.size()+1)
					return maxS.size();
				temp[i] = i;
				maxS[index] = 0;
			}
		}
	}
	else {
		for (int i = maxS[index - 1] - '0' - 1; i >= 0; i--) {
			if (temp[i] == -1)
				continue;
			else {
				maxS[index] = i+'0';
				temp[i] = -1;
				if (findmaxS(index + 1) == input.size()+1)
					return maxS.size();
				temp[i] = i;
				maxS[index] = 0;
			}
		}
	}
	return index;
}
int findminS(int index) {
	if (index == input.size()+1)
		return index;
	if (input[index-1] == '<') {
		for (int i = minS[index - 1] - '0'+1; i <10 ; i++) {
			if (temp[i] == -1)
				continue;
			else {
				minS[index] = i+'0';
				temp[i] = -1;
				if (findminS(index + 1) == input.size()+1)
					return minS.size();
				temp[i] = i;
				minS[index] = 0;
			}
		}
	}
	else {
		for (int i = 0; i < minS[index - 1] - '0'; i++) {
			if (temp[i] == -1)
				continue;
			else {
				minS[index] = i+'0';
				temp[i] = -1;
				if (findminS(index + 1) == input.size()+1)
					return minS.size();
				temp[i] = i;
				minS[index] = 0;
			}
		}
	}
	return index;
}
int main() {
	int num;
	cin >> num;
	input.assign(num, 0);
	for (int i = 0; i < num; i++) {
		cin >> input[i];
	}
	//maxS
	maxS.assign(num + 1, 0);
	for (int i = 9; i >=0; i--) {
		maxS[0]=i+'0';
		temp[i] = -1;
		if (findmaxS(1) == input.size()+1)
			break;
		temp[i] = i;
		maxS.clear();
		maxS.assign(num + 1, 0);
	}
	for (int i = 0; i < 10; i++)
		temp[i] = i;
	//minS
	minS.assign(num + 1, 0);
	for (int i = 0; i < 10; i++) {
		minS[0]=i+'0';
		temp[i] = -1;
		if (findminS(1) == input.size()+1)
			break;
		temp[i] = i;
		minS.clear();
		minS.assign(num + 1, 0);
	}
	cout << maxS << endl;
	cout << minS << endl;
}