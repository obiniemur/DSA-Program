#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int n;
        cin >> n;
        int a[n];
        int totalSum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalSum += a[i];
        }

        if (totalSum % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int s = totalSum / 2;
        bool dp[n + 1][s + 1];
        dp[0][0] = true;

        for (int i = 1; i <= s; i++) {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= s; j++) {
                if (a[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][s]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
