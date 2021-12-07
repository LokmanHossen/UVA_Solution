#include<cstdio>
#include<algorithm>
using namespace std;

int main(void)
{
	char ch;
	int x, maxn, sum, exit;
	while (true)
	{
		maxn = sum = 0;
		while (true)
		{
			exit = scanf("%d%c", &x, &ch);
			if (exit == -1) return 0;
			sum += x;
			if (sum <= 0) sum = 0;
			else maxn = max(maxn, sum);
			if (ch == '\n' || exit == 1)
			{
				printf("%d\n", maxn);
				break;
			}
		}
	}
	return 0;
}
