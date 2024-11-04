// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

bool isDigitsUnique(int y) {
	int firstDigit = y / 1000;
	y = y - (firstDigit * 1000);
	int secondDigit = y / 100;
	y = y - (secondDigit * 100);
	int thirdDigit = y / 10;
	int fourthDigit = y % 10;
	set<int> s;
	s.insert(firstDigit);
	s.insert(secondDigit);
	s.insert(thirdDigit);
	s.insert(fourthDigit);
	return s.size() == 4;
}

void solve() {
	int y;
	cin >> y;
	y++;
	while (y <= 10000) {
		if (isDigitsUnique(y)) {
			cout << y;
			return;
		}
		y++;
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