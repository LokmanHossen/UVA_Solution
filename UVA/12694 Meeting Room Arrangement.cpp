
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int testcase, L, R;
	scanf("%d", &testcase);
	while(testcase--) {
		vector< pair<int, int> > M;
		while(scanf("%d %d", &L, &R) == 2 && L + R) {
			M.push_back(make_pair(R, L));
		}
		sort(M.begin(), M.end());
		int ret = 0;
		L = 0;
		for(int i = 0; i < M.size(); i++) {
			if(L <= M[i].second) {
				L = M[i].first;
				ret++;
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}