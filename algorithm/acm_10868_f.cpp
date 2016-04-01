#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define min(a,b) a>b?b:a;
#define max(a,b) a>b?a:b;
const int INF = 987654321;
enum Operation { rangeSum = 0, rangeMin = INF, rangeMax = -INF };

class SegmentTree {
public:
	SegmentTree(int n, Operation oper)
		: root(new SegmentTreeNode(0, n - 1, oper)), oper(oper) {}
	// update value of 'pos'th node
	void update(int pos, int value) { root->update(pos, value); }
	// return result of query at [lo, hi]
	int query(int lo, int hi) { return root->query(lo, hi); }

private:
	class SegmentTreeNode {
	public:
		SegmentTreeNode(int first, int last, Operation oper)
			: first(first), last(last), value(oper), oper(oper) {
			if (first != last) {
				int mid = (first + last) / 2;
				left = new SegmentTreeNode(first, mid, oper);
				right = new SegmentTreeNode(mid + 1, last, oper);
			}
		}
		void update(int pos, int val) {
			// if leaf node, immediately update
			if (first == last)
				value = val;
			// else, update branch and set by result of update
			else {
				if (pos <= (first + last) / 2)
					left->update(pos, val);
				else
					right->update(pos, val);
				if (oper == rangeSum) {
					value = left->value + right->value;
				}
				else if (oper == rangeMin) { value = min(left->value, right->value); }
				else { value = max(left->value, right->value); }
			}

		}
		int query(int lo, int hi) {
			// if [lo, hi] and [first, last] have no intersection
			if (hi < first || last < lo) return oper;
			// if [lo, hi] includes [first, last]
			if (lo <= first && last <= hi) return value;
			// else find from each branch and make answer
			if (oper == rangeSum) return left->query(lo, hi) + right->query(lo, hi);
			else if (oper == rangeMin) { return min(left->query(lo, hi), right->query(lo, hi)); }
			else if (oper == rangeMax) {
				return max(left->query(lo, hi), right->query(lo, hi));
			}
		}
	private:
		int first, last; // coverage of node is [first, last]
		int value; // result of query at [first, last] segment
		SegmentTreeNode *left, *right;
		Operation oper;
	};
	SegmentTreeNode *root;
	Operation oper;
};
int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	SegmentTree st(n, rangeMin);
	for (int i = 0; i < n; i++) {
		int val;
		scanf("%d", &val);
		st.update(i, val);
	}
	for (int i = 0; i < m; i++) {
		int lo, hi;
		scanf("%d %d", &lo, &hi);
		printf("%d\n", st.query(lo - 1, hi - 1));
	}
	return 0;
}