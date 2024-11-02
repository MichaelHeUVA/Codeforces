// https://codeforces.com/problemset/problem/445/A
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
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<char>> grid(rows, vector<char>(cols));
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            char cell;
            cin >> cell;
            if (cell == '.') {
                if ((row + col) % 2 == 0) {
                    grid[row][col] = 'B';
                } else {
                    grid[row][col] = 'W';
                }
            } else {
                grid[row][col] = '-';
            }
        }
    }
    string output;
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            output.append(1, grid[row][col]);
        }
        output.append("\n");
    }

    cout << output;
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