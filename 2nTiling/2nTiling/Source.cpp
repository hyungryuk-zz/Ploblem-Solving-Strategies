#include<stdio.h>

int main() {
	int dp[1001][2];
	int n;
	scanf("%d", &n);
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[1][0] = 1;
	dp[1][1] = 0;
	dp[2][0] = 1;
	dp[2][1] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1])%10007;
		dp[i][1] = dp[i - 1][0];
		
	}
	printf("%d\n", (dp[n][0] + dp[n][1])%10007);
	
}