#include<iostream>
#include<vector>
using namespace std;
#define INF 2000000000
vector< vector <int> > vertex;
int dist[801];
int visit[801];
int v, e;
int dijkstra(int start, int end) {
	for (int i = 1; i <= v; i++) {
		dist[i] = INF;
		visit[i] = 0;
	}
	int min;
	int tempV;
	dist[start] = 0;
	for (int i = 1; i <=v; i++) {
		min = INF;
		for (int j = 1; j <= v; j++) {
			if (visit[j] == 0 && min > dist[j]) {
				min = dist[j];
				tempV = j;
			}
		}
		visit[tempV] = 1;
		for (int j = 1; j <= v; j++) {
			if (dist[j] > dist[tempV] + vertex[tempV][j]){
				dist[j] = dist[tempV] + vertex[tempV][j];
			}
		}
	}
	return dist[end];
}
int main() {
	vector< int> temp;
	temp.assign(801, INF);
	vertex.assign(801, temp);
	cin >> v>>e;
	int sv, ev, val;
	for (int i = 1; i <=e; i++) {
		cin >> sv >> ev>>val;
		vertex[sv][ev] = val;
		vertex[ev][sv] = val;
	}
	int temp1, temp2;
	cin >> temp1 >> temp2;
	int num1 = dijkstra(1, temp1) + dijkstra(temp2, v);
	int num2 = dijkstra(1, temp2) + dijkstra(temp1, v);
	int tempTemp = dijkstra(temp1, temp2);
	if ((num1 >= INF && num2 >= INF) || tempTemp >= INF)
		cout << -1<<endl;
	else if (num1 > num2) {
		cout << num2+tempTemp << endl;
	}
	else {
		cout << num1+ tempTemp << endl;
	}
	return 0;
}
