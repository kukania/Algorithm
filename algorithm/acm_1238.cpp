#define _CRT_SECURE_NO_WARNINGS
/*#include<iostream>
#include<cstdio>
#include<string.h>
#define MIN 101
using namespace std;
int arr[1001][1001];
int arr2[1001][1001];
int dist[1001];
bool visit[1001];
int head;
int dijkstra(int start, int end) {
	memset(visit, 0, sizeof(visit));
	memcpy(arr2, arr, sizeof(arr));
	for (int i = 0; i <= head; i++) dist[i] = MIN;
	int i, j, min;
	int v;
	dist[start] = 0;
	for (i = 1; i <= head; i++) {
		min = MIN;
		v = -1;
		for (j = 1; j <= head; j++) {
			if (visit[j] == 0 && min > dist[j]) {
				min = dist[j];
				v = j;
			}
		}
		visit[v] = 1;
		for (j = 1; j <= head; j++) {
			if (dist[j] > dist[v] + arr2[v][j])
				dist[j] = dist[v] + arr2[v][j];
		}
	}
	return dist[end];
}
int main() {
	int edge, val;
	scanf("%d %d %d", &head, &edge, &val);
	int x, y, k;
	for (int i = 0; i <= head; i++) {
		for (int j = 0; j <= head; j++) { 
			if(i!=j)
				arr[i][j] = MIN; 
		}
	}
	for (int i = 0; i < edge; i++) {
		scanf("%d %d %d",&x,&y,&k);
		arr[x][y] = k;
	}
	int max = 0,temp;
	for (int i = 1; i <= head; i++) {
		temp = dijkstra(i, val) + dijkstra(val, i);
		if (max <temp)
			max = temp;
	}
	printf("%d\n", max);
}
*/
#include <iostream>
#include <vector>
#define INF 99999999

using namespace std;

int main() {

	// init

	int n, m, x;
	cin >> n >> m >> x;
	x--;

	vector< vector<int> > graph;
	for (int i = 0; i < n; i++) {
		vector<int> tmp; 
		tmp.resize(n);
		for (int j = 0; j < n; j++) tmp[j] = INF;
		graph.push_back(tmp);
	}

	int a, b, c;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		graph[a - 1][b - 1] = c;
	}

	for (int i = 0; i < n; i++)
		graph[i][i] = 0;

	// solve

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (graph[i][k] + graph[k][j] < graph[i][j]) graph[i][j] = graph[i][k] + graph[k][j];

	int max = -1;

	for (int i = 0; i < n; i++)
		if (graph[i][x] + graph[x][i] > max && graph[i][x] != INF && graph[x][i] != INF) max = graph[i][x] + graph[x][i];

	cout << max << endl;

	return 0;
}