#include <bits/stdc++.h>
using namespace std;
#define OVERLOAD_REP(_1, _2, _3, name, ...) name
#define REP1(i, n) for (auto i = decay_t<decltype(n)>{}; (i) != (n); ++(i))
#define REP2(i, l, r) for (auto i = (l); (i) != (r); ++(i))
#define rep(...) OVERLOAD_REP(__VA_ARGS__, REP2, REP1)(__VA_ARGS__)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define vcin(x) \
    for (auto &youso_ : (x)) cin >> youso_
#define yes cout << "yes" << endl
#define Yes cout << "Yes" << endl
#define YES cout << "YES" << endl
#define no cout << "no" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
const int MOD = 998244353;
const int INF = 1000000000;
const long long LINF = 1e18;
using ll = long long;
template <class T>
using v1 = vector<T>;
template <class T>
using v2 = vector<vector<T>>;
template <class T>
using v3 = vector<vector<vector<T>>>;
template <typename T>
bool chmax(T &a, const T &b) {
    return (a < b ? (a = b, true) : false);
}
template <typename T>
bool chmin(T &a, const T &b) {
    return (a > b ? (a = b, true) : false);
}
template <class T>
ostream &operator<<(ostream &os, vector<T> v) {
    for (int i = 0; i < (int)v.size(); i++) {
        if (i) os << " ";
        os << v[i];
    }
    return os;
}
typedef pair<int, int> p;

int main() {
    cout << "Who are you?" << endl;
    string s;
    cin >> s;
    cout << "Hello, " << s << "!" << endl;
}