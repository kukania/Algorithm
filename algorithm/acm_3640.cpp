#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#define maxn 42005
#define inf 99999
using namespace std;
struct edge
{
	int from, to, cap, flow, cost;
};


struct mcmf
{

	int n, m, s, t;

	vector<edge>edges;

	vector<int>g[maxn];

	int inq[maxn], d[maxn], p[maxn], a[maxn];

	void init(int n)

	{

		this->n = n;

		edges.clear();

		for (int i = 0; i < n; i++)g[i].clear();

	}

	void addedge(int from, int to, int cap, int cost)

	{

		edges.push_back((edge) { from, to, cap, 0, cost });

		edges.push_back((edge) { to, from, 0, 0, -cost });

		m = edges.size();

		g[from].push_back(m - 2);

		g[to].push_back(m - 1);

	}

	bool bellmamford(int s, int t, int &flow, int& cost)

	{

		for (int i = 0; i < n; i++)d[i] = inf;

		memset(inq, 0, sizeof inq);

		d[s] = 0;
		inq[s] = 1;

		p[s] = 0;
		a[s] = inf;

		queue<int>q;

		q.push(s);

		while (!q.empty())

		{

			int u = q.front();

			q.pop();

			inq[u] = 0;

			for (int i = 0; i < g[u].size(); i++)

			{

				edge& e = edges[g[u][i]];

				if (e.cap > e.flow&&d[e.to] > d[u] + e.cost)

				{

					d[e.to] = d[u] + e.cost;

					p[e.to] = g[u][i];

					a[e.to] = min(a[u], e.cap - e.flow);

					if (!inq[e.to])

					{

						q.push(e.to);

						inq[e.to] = 1;

					}

				}

			}

		}

		if (d[t] == inf)return false;

		flow += a[t];

		cost += d[t] * a[t];
		int u = t;

		while (u != s)

		{

			edges[p[u]].flow += a[t];

			edges[p[u] ^ 1].flow -= a[t];

			u = edges[p[u]].from;

		}

		return true;

	}



	int mincost(int s, int t)

	{

		int flow = 0, cost = 0;

		while (bellmamford(s, t, flow, cost));

		return cost;

	}

}getans;

int main()

{

	int nn, mm, f, t, c;

	while (scanf("%d%d", &nn, &mm) != EOF)

	{

		getans.init(2 * nn + 2);

		getans.addedge(0, 1 + nn, 2, 0);

		getans.addedge(nn, 2 * nn + 1, 2, 0);

		for (int i = 2; i < nn; i++)

			getans.addedge(i, i + nn, 1, 0);
		for (int i = 0; i < mm; i++)

		{

			scanf("%d%d%d", &f, &t, &c);

			getans.addedge(f + nn, t, 1, c);

		}

		printf("%d\n", getans.mincost(0, 2 * nn + 1));

	}

	return 0;

}
