#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fastio

    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    int min_row = H, max_row = -1;
    int min_col = W, max_col = -1;
    bool flag=true;

    // Determine the boundaries of the existing black cells
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '#') {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }

    // Check all cells within the rectangle for white cells
    for (int i = min_row; i <= max_row; ++i) {
        for (int j = min_col; j <= max_col; ++j) {
            if (grid[i][j] == '.') {
                flag = false;
                break;
            }
        }
        if (flag == false)
            break;
    }

    if(flag)
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
     
    return 0;
   
}
