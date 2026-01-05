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
 
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
 
    else if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION";
        return 0;
    }
 
    int n1 = n;
    int n2 = n-1;
 
    vector<int> ans;
    while(n2 > 0)
    {
        cout << n2 << " ";
        n2 -= 2;
    }
 
    while(n1 > 0)
    {
        cout << n1 << " ";
        n1 -= 2;
    }
 
    return 0;
}