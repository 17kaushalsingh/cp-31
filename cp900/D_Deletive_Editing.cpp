#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()

vector<int> takeInput(int n) {
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    return arr;
}

void printArray(vector<int> &arr) {
    for (int &x : arr) cout << x << " ";
    cout << "\n";
}

int getLastOcc(char ch, string &s) {
    int n = s.size();
    for (int i=n-1; i>=0; i--) {
        if (s[i] == ch) return i;
    }

    return -1;
}

bool f(string &s, string &target) {
    if (target == s) return true;

    int last = -1;
    for (char ch : target) {
        int lastOcc = getLastOcc(ch, s);
        if (lastOcc > last) {
            last = lastOcc;
        } else return false;
    }

    return true;
}

void solve() {
    string s, t;
    cin >> s >> t;
    bool ans = f(s, t);

    (ans) ? (cout << "YES") : (cout << "NO");
    cout << endl;
}

#undef int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}