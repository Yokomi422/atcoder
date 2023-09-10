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
#define rep(i, j, n) for (int i = j; i < (int)(n); i++)
using Graph = vector<vector<int>>;
using ll = long long;
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}

const long long INF = 1LL << 60;

int main()
{
    int n, d, p;
    cin >> n >> d >> p;
    vector<int> f(n);
    rep(i, 0, n) cin >> f[i];
    long long ans = INF;
    sort(f.begin(), f.end());
    for (int i = 0; i < n / d + 2; i++)
    {
        long long cost = p * i;
        int no_pass_days = ((n - d * i) > 0 ? n - d * i : 0);
        for (int j = 0; j < no_pass_days; j++)
        {
            cost += f[j];
        }
        chmin(ans, cost);
    }
    cout << ans << endl;
}
