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

// numberv of ways to place two kinghts on a KxK chessboard
int getWays(int k)
{
    if (k < 2) return 0;

    if (k == 2) return 6;
}

int main()
{
    int n;
    cin >> n;

    for (int k=1; k<=n; k++)
    {
        int ways = getWays(k);
        cout << ways << endl;
    }
    
    return 0;
}