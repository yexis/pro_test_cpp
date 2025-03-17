#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <numeric>
#include <set>
#include <array>
#include <cassert>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <complex>
#include <cmath>
#include <numeric>
#include <bitset>
#include <functional>
#include <random>
#include <ctime>
#include <limits>

using namespace std;
#define ios ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using arr3 = array<int, 3>;

void test_array() {
    vector<arr3> pr;
    // pr.push_back({1, 2, 3});     // it's ok
    // pr.push_back(arr3{1,2,3});   // it's ok
    // pr.push_back(arr3(1, 2, 3)); // it's not ok
    // pr.emplace_back(1, 2, 3);    // it's not ok
    // pr.emplace_back({1, 2, 3});  // it's not ok
    for (auto& p : pr) {
        for (auto& e : p) {
            cout << e << " ";
        }
        cout << "\n";
    }
}

int main() {
    test_array();
    return 0;
}