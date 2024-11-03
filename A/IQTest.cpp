// https://codeforces.com/problemset/problem/287/A
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

void solve() {
    vector<vector<string>> grid(4, vector<string>(4));
    int rows = 4;
    int cols = 4;

    for (int row = 0; row < rows; ++row) {
        string rowString;
        cin >> rowString;
        for (int col = 0; col < cols; ++col) {
            grid[row][col] = rowString[col];
        }
    }

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            if (row + 1 < rows && col + 1 < cols) {
                int paintedSquares = 0;
                if (grid[row][col] == "#")
                    paintedSquares++;
                else
                    paintedSquares--;
                if (grid[row + 1][col] == "#")
                    paintedSquares++;
                else
                    paintedSquares--;
                if (grid[row][col + 1] == "#")
                    paintedSquares++;
                else
                    paintedSquares--;
                if (grid[row + 1][col + 1] == "#")
                    paintedSquares++;
                else
                    paintedSquares--;
                if (paintedSquares >= 2 || paintedSquares <= -2) {
                    cout << "YES";
                    return;
                }
            }
        }
    }

    cout << "NO";
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