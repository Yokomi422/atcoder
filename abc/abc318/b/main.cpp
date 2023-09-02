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
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> plane(101, vector<int>(101, 0));

    for (int i = 0; i < n; ++i)
    {
        int Ai, Bi, Ci, Di;
        cin >> Ai >> Bi >> Ci >> Di;
        for (int x = Ai; x < Bi; ++x)
        {
            for (int y = Ci; y < Di; ++y)
            {
                ++plane[x][y];
            }
        }
    }

    int covered_area = 0;
    for (const auto &row : plane)
    {
        for (const auto &cell : row)
        {
            if (cell >= 1)
            {
                ++covered_area;
            }
        }
    }

    cout << covered_area << endl;

    return 0;
}
