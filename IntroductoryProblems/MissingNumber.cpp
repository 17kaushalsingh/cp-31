// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int ans = 0;
 
    for (int i=1; i<n; i++)
    {
        int num;
        cin >> num;
 
        ans = ans ^ num ^ i;
    }
 
    ans = ans ^ n;
 
    cout << ans;
 
    return 0;
}
