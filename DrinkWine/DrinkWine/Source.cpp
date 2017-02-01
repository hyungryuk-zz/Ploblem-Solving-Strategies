#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int dp[10001];
	dp[0] = 0;
	scanf("%d", &dp[1]);
	scanf("%d", &dp[2]);
	int tmp = dp[2];
	int tmp1;
	dp[2] += dp[1];
	for (int i = 3; i <= n; i++) {
		scanf("%d", &dp[i]);
		tmp1 = max(dp[i - 1], max(dp[i - 2] + dp[i], dp[i - 3] + dp[i] + tmp));
		tmp = dp[i];
		dp[i] = tmp1;
	}
	printf("%d\n", dp[n]);
}