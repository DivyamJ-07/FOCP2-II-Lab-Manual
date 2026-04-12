#include <iostream>
#include <vector>
using namespace std;

const int N = 10000001;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> dp(N, 0);

    // count distinct prime factors
    for (int i = 2; i < N; i++) {
        if (dp[i] == 0) { // prime
            for (int j = i; j < N; j += i) {
                dp[j]++;
            }
        }
    }

    // convert to answer = 2^count
    for (int i = 1; i < N; i++) {
        dp[i] = (1 << dp[i]);
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}