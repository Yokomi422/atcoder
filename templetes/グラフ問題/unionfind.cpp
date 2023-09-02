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

class UnionFind
{
public:
    int n;
    vector<int> par;
    vector<int> depth;
    UnionFind(int n) : n(n)
    {
        par.resize(n);
        depth.resize(n);
        for (int i = 0; i < n; ++i)
        {
            par[i] = i;
            depth[i] = 0;
        }
    }
    int root(int x)
    {
        if (x == par[x])
        {
            return x;
        }
        {
            return par[x] = root(par[x]);
        }
    }
    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }
    void unite(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return;
        if (depth[x] < depth[y])
        {
            par[x] = y;
        }
        else
        {
            par[y] = x;
            if (depth[x] == depth[y])
                depth[x]++;
        }
    }
};

int main()
{
}
