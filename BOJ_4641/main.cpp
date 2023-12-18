#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  cin >> t;
  auto v = vi{};
  while (true) {
    if (-1 == t) {
      break;
    } else {
      v.push_back(t);
    }

    cin >> t;
    while (0 != t) {
      v.push_back(t);
      cin >> t;
    }

    auto ans = 0;
    for (auto i = 0; i < v.size(); ++i) {
      for (auto j = 0; j < v.size(); ++j) {
        if (v[j] == 2 * v[i]) {
          ++ans;
        }
      }
    }

    cout << ans << '\n';

    v = vi{};
    cin >> t;
  }

  return 0;
}