#include <bits/stdc++.h>

using namespace std;

int minCoins(const vector<int>& coins, int target) {
    vector<int> dp(target + 1, INT_MAX);
    dp[0] = 0;

    for (int coin : coins) {
        for (int j = coin; j <= target; ++j) {
            if (dp[j - coin] != INT_MAX) {
                dp[j] = min(dp[j], dp[j - coin] + 1);
            }
        }
    }

    return dp[target] == INT_MAX ? -1 : dp[target];
}

int main() {
    vector<int> coins = {2,12,8,14,18,10};
    int target = 14;

    int result = minCoins(coins, target);
    if (result != -1) {
        cout <<result << endl;
    } else {
        cout << "not possible" << endl;
    }

    return 0;
}
