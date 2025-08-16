#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int dp[101];
    dp[0] = 1;   // ฐานกรณี: ยืนที่พื้น
    dp[1] = 1;   // กระโดดขึ้นขั้นที่ 1 มีวิธีเดียว

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    printf("method = %d\n", dp[n]);
    return 0;
}
