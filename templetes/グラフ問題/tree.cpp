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

class Tree
{
public:
    int n;
    vector<int> par;
    vector<vector<int>> children;
    Tree(int n) : n(n)
    {
        par.resize(n);
        children.resize(n);
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
        }
    }
};

int main()
{
}