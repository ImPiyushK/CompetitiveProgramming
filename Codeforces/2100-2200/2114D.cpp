#include <bits/stdc++.h>
using namespace std;
 
#define int64 long long
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<pair<int64, int64>> a(n);
        map<int64, int> x_count, y_count;
        vector<int64> x_vals, y_vals;
 
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
            x_vals.push_back(a[i].first);
            y_vals.push_back(a[i].second);
            x_count[a[i].first]++;
            y_count[a[i].second]++;
        }
 
        if (n == 1) {
            cout << "1\n";
            continue;
        }
 
        sort(x_vals.begin(), x_vals.end());
        sort(y_vals.begin(), y_vals.end());
 
        int64 min_x = x_vals[0];
        int64 max_x = x_vals[n - 1];
        int64 min2_x = x_vals[1];
        int64 max2_x = x_vals[n - 2];
 
        int64 min_y = y_vals[0];
        int64 max_y = y_vals[n - 1];
        int64 min2_y = y_vals[1];
        int64 max2_y = y_vals[n - 2];
 
        int64 base_width = max_x - min_x + 1;
        int64 base_height = max_y - min_y + 1;
        int64 base_area = base_width * base_height;
 
        int64 ans = base_area;
 
        for (int i = 0; i < n; ++i) {
            int64 xi = a[i].first, yi = a[i].second;
 
            int64 new_min_x = (xi == min_x && x_count[min_x] == 1) ? min2_x : min_x;
            int64 new_max_x = (xi == max_x && x_count[max_x] == 1) ? max2_x : max_x;
            int64 new_min_y = (yi == min_y && y_count[min_y] == 1) ? min2_y : min_y;
            int64 new_max_y = (yi == max_y && y_count[max_y] == 1) ? max2_y : max_y;
 
            int64 width = new_max_x - new_min_x + 1;
            int64 height = new_max_y - new_min_y + 1;
 
            int64 area = width * height;
 
            // Check if remaining monsters fill the rectangle perfectly
            if (area == n - 1) {
                // We need to make room for the moved monster
                area += min(width, height);
            }
 
            ans = min(ans, area);
        }
 
        cout << ans << '\n';
    }
 
    return 0;
}