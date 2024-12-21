#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int h, w, x, y;
    cin >> h >> w >> x >> y;

    vector<vector<char>> s(h + 1, vector<char>(w + 1));
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            cin >> s[i][j];
        }
    }

    string t;
    cin >> t;
    set<pair<int, int>> visited;
    if (s[x][y] == '@') {
        visited.insert({x, y});
    }

    for (char move : t) {
        if (move == 'U' && s[x - 1][y] != '#') {
            x--;
        } else if (move == 'D' && s[x + 1][y] != '#') {
            x++;
        } else if (move == 'L' && s[x][y - 1] != '#') {
            y--;
        } else if (move == 'R' && s[x][y + 1] != '#') {
            y++;
        }

        if (s[x][y] == '@') {
            visited.insert({x, y});
        }
    }

    cout << x << " " << y << " " << visited.size() << endl;

    return 0;
}
