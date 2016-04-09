#include <string>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	vector<int> vec_small;
	vector<int> vec_max;
	int n, m, size, temp, pos, a, b, small, max;
	scanf("%d%d", &n, &m);
	//cin >> n >> m;
	for (size = 1; size < n; size *= 2)
	{

	}
	for (int i = 0; i < size; i++)
	{
		vec_small.push_back(1000000000);
		vec_max.push_back(1);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		//cin >> temp;
		vec_small.push_back(temp);
		vec_max.push_back(temp);
	}
	for (int i = size; i < vec_small.size(); i++)
	{
		pos = i;
		while (pos / 2 != 0)
		{
			if (vec_small[pos] < vec_small[pos / 2])
				vec_small[pos / 2] = vec_small[pos];
			if (vec_max[pos] > vec_max[pos / 2])
				vec_max[pos / 2] = vec_max[pos];
			pos /= 2;
			/*vec[pos / 2] = tree[pos]°ú tree[pos / 2] Áß ÃÖ¼Ú°ª
			pos /= 2;*/
		}
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &a, &b);
		//cin >> a >> b;
		a += size - 1;
		b += size - 1;
		small = 1000000000;
		max = 1;
		while (a <= b)
		{
			if (small > vec_small[a])
				small = vec_small[a];
			if (small > vec_small[b])
				small = vec_small[b];
			if (max < vec_max[a])
				max = vec_max[a];
			if (max < vec_max[b])
				max = vec_max[b];
			if (a == b)
				break;
			if (a % 2 == 1)
				a++;
			if (b % 2 == 0)
				b--;
			a /= 2;
			b /= 2;
		}
		printf("%d %d\n", small, max);
		//cout << small <<" "<< max << endl;
	}
	return 0;
}