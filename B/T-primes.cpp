// https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream& operator<<(ostream& os, const pair<A, B>& p) {
    return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
ostream& operator<<(ostream& os, const T_container& v) {
    os << '{';
    string sep;
    for (const T& x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() {
    cerr << endl;
}
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

#define LIMIT 1000000
int primes[LIMIT];

void calculatePrimes() {
    primes[0] = 1;
    primes[1] = 1;
    for (ll i = 2; i < LIMIT; i++) {
        if (primes[i] == 0) {
            for (ll j = i * i; j < LIMIT; j += i) {
                primes[j] = 1;
            }
        }
    }
}

bool isSquare(ll x) {
    ll sqaureRoot = sqrt(x);
    return sqaureRoot * sqaureRoot == x;
}

void solve() {
    int n;
    cin >> n;
    calculatePrimes();
    while (n--) {
        ll x;
        cin >> x;
        if (isSquare(x) && primes[int(sqrt(x))] == 0) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}