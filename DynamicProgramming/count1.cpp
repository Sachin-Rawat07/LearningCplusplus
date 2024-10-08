//count the number of combination of binary string with no consecutive ones

#include <iostream>
#include <vector>

using namespace std;

int countBinaryStrings(int N) {
    if (N == 1) return 2;
    if (N == 2) return 3;
    
    vector<long long> dp(N + 1);
    dp[1] = 2;
    dp[2] = 3;

    for (int i = 3; i <= N; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    }

    return dp[N]; 
}

int main() {
    int n;
    cin >> n;
    int result = countBinaryStrings(n);
    cout<< result << endl;

    return 0;
}
