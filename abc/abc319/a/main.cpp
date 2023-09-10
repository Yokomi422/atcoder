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
    cin >> s;
    if (s == "tourist")
        cout << 3858 << endl;
    else if (s == "ksun48")
        cout << 3679 << endl;
    else if (s == "Benq")
        cout << 3658 << endl;
    else if (s == "Um_nik")
        cout << 3648 << endl;
    else if (s == "apiad")
        cout << 3638 << endl;
    else if (s == "Stonefeang")
        cout << 3630 << endl;
    else if (s == "ecnerwala")
        cout << 3613 << endl;
    else if (s == "mnbvmar")
        cout << 3555 << endl;
    else if (s == "newbiedmy")
        cout << 3516 << endl;
    else
        cout << 3481 << endl;
}