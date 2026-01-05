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
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
 
    long long int moves = 0;
    for (int i=1; i<n; i++)
    {
        if (arr[i] >= arr[i-1]) continue;
 
        moves += arr[i-1] - arr[i];
        arr[i] = arr[i-1];
    }
 
    cout << moves;
 
    return 0;
}