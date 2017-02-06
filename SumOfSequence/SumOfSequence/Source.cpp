#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,max;
	scanf("%d", &n);
	scanf("%d", &max);
	int *dp = (int *)malloc(sizeof(int)*n);
	dp[0] = max;
	for (int i = 1; i < n; i++) {
		dp[i] = 0;
	}
	for (int i = 1; i < n; i++) {
		scanf("%d", &dp[i]);
		if (dp[i-1]>0&&dp[i - 1] + dp[i] > 0) {
			dp[i] = dp[i - 1] + dp[i];
		}
		if (max < dp[i]) {
			max = dp[i];
		}
	}
	printf("%d", max);
}