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
    string s;
    int k;
    cin >> s >> k;
    vector<string> permutations;
    sort(s.begin(), s.end());
    do
    {
        permutations.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << permutations[k - 1] << endl;
}