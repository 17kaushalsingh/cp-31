#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <string>
#include <memory>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <chrono>
#include <complex>
#include <stdexcept>
#include <exception>
#include <type_traits>
#include <bitset>
#include <tuple>
#include <iterator>
#include <cassert>
#include <queue>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n ; i++) cin >> arr[i];

        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i=1; i<n; i++)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }

        cout << 2*n-1 << endl;
        for (int x : ans) cout << x << " ";
        cout << endl;
    }

    return 0;
}