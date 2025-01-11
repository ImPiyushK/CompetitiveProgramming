#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin >> n >> d;

    vector<vector<int>> snakes(n, vector<int>(2, 0));

    for(int i = 0 ; i < n ; ++i)
        cin >> snakes[i][0] >> snakes[i][1];
    
    for(int x = 1 ; x <= d ; ++x){
        int maxWeight = INT_MIN;
        for(int i = 0 ; i < n ; ++i){
            int wt = snakes[i][0] * (snakes[i][1]+x);
            if(wt > maxWeight)
                maxWeight = wt;
        }
        cout << maxWeight << '\n';
    }

    return 0;
}