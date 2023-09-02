#include <iostream>
#include <string>
#include <algorithm> 
#include <cmath>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <iomanip>
#include <set>
#include <tuple>
#include <cassert>
#include <bitset>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using Graph = vector<vector<int>>;
using ll = long long;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, h, x;
    cin >> n >> h >> x;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    for (int i = 0; i < n; i++) {
        if (h + p[i] >= x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}