#include<iostream>
#include<vector>
using namespace std;
struct edge;
struct Content {
	int number;
	vector<edge> out;
	vector<edge> com;
	int flag;
};
struct edge {
	Content *from;
	Content *to;
};
vector<Content>arr;
void outDFS(int index) {
	for (int i = 0; i < arr[index].out.size(); i++) {
		if (arr[index].out[i].to->flag == 1)
			continue;
		else {
			arr[index].out[i].to->flag = 1;
			outDFS(arr[index].out[i].to->number);
		}
	}
}
void comDFS(int index) {
	for (int i = 0; i < arr[index].com.size(); i++) {
		if (arr[index].com[i].from->flag == 1)
			continue;
		else {
			arr[index].com[i].from->flag = 1;
			comDFS(arr[index].com[i].from->number);
		}
	}
}
void DFS(int index) {
	outDFS(index);
	comDFS(index);
}
int main() {
	int conNum;
	int result = 0;
	cin >> conNum;
	Content temp;
	for (int i = 0; i < conNum; i++) {
		temp.number = i;
		arr.push_back(temp);
	}
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		edge eTemp;
		int a, b;
		cin >> a >> b;
		eTemp.from = &arr[b - 1];
		eTemp.to = &arr[a - 1];
		arr[b - 1].out.push_back(eTemp);
		arr[a - 1].com.push_back(eTemp);
	}
	for (int i = 0; i < conNum; i++) {
		for (int j = 0; j < conNum; j++)
			arr[j].flag = 0;
		DFS(i);
		int cnt = 0;
		for (int j = 0; j < conNum; j++) {
			if (arr[j].flag == 1)
				cnt++;
		}
		if (conNum - cnt - 1 == 0)
			result++;
	}
	cout << result << endl;
	return 0;
}