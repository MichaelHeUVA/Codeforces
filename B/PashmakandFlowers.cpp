// https://codeforces.com/problemset/problem/459/B
#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve() {
    ll n;
    cin >> n;
    vector<ll> nums;
    ll max = LLONG_MIN;
    ll min = LLONG_MAX;
    ll maxCount = 0;
    ll minCount = 0;
    ll originalN = n;

    while (n--) {
        ll b;
        cin >> b;
        nums.push_back(b);
        if (b < min) {
            min = b;
            minCount = 0;
        }
        if (b > max) {
            max = b;
            maxCount = 0;
        }
        if (b == min) {
            minCount++;
        }
        if (b == max) {
            maxCount++;
        }
    }

    ll maxDiff = max - min;

    if (min == max) {
        ll count = (originalN * (originalN - 1)) / 2;
        cout << maxDiff << " " << count;
    } else {
        cout << maxDiff << " " << maxCount * minCount;
    }
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