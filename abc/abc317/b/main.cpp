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

void dfs(vector<bool> &visited, const Graph &G, int v)
{
    visited[v] = true;
    cout << v << endl;
    for (int point : G[v])
    {
        if (visited[point])
            continue;
        dfs(visited, G, point);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    Graph G(n);
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }
    for (vector<int> &g : G)
    {
        sort(g.begin(), g.end());
    }
    vector<bool> visited(n, false);
    dfs(visited, G, 0);
}