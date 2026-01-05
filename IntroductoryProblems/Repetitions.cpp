// Source: https://usaco.guide/general/io
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
 
    int n = str.size();
    int ans = 1;
    int len = 1;
 
    for (int i=1; i<n; i++)
    {
        if (str[i] == str[i-1])
        {
            len++;
        }
 
        else len = 1;
 
        ans = max(ans, len);
    }
 
    cout << ans;
    
    return 0;
}