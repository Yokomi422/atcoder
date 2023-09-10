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
    int all_pattern = 362880;
    vector<int> c(9);
    rep(i, 0, 9) cin >> c[i];
    int a[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int not_dissappointed_cnt = 0;
    do
    {
        if ((c[a[0]] == c[a[1]] && c[a[1]] != c[a[2]]) || (c[a[1]] == c[a[2]] && c[a[2]] != c[a[3]]) || (c[a[3]] == c[a[4]] && c[a[4]] != c[a[5]]) || (c[a[4]] == c[a[5]] && c[a[5]] != c[a[6]]) || (c[a[6]] == c[a[7]] && c[a[7]] != c[a[8]]) || (c[a[7]] == c[a[8]] && c[a[8]] != c[a[0]]) || (c[a[8]] == c[a[0]] && c[a[0]] != c[a[1]]))
        {
            continue;
        }
        else
        {
            not_dissappointed_cnt++;
        }
    } while (std::next_permutation(a, a + 9));
    cout << fixed << setprecision(10) << (double)not_dissappointed_cnt / all_pattern << endl;
}