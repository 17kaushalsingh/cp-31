#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> arrays(n);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++) cin >> arrays[i][j];
        maxLen = max(maxLen, k);
    }

    vector<int> ans(maxLen, INT_MAX);

    // For each column, consider all arrays that have that column
    for (int j = 0; j < maxLen; j++) {
        int best = INT_MAX;
        for (auto &arr : arrays) {
            if ((int)arr.size() > j) {
                best = min(best, arr[j]);
            }
        }
        ans[j] = best;
    }

    for (int j = 0; j < maxLen; j++) cout << ans[j] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();
}
