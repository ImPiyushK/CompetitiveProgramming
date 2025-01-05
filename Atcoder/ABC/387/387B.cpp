#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    vector<vector<int>> grid(10, vector<int>(10));
    int sum = 0;

    for(int i = 1 ; i <= 9 ; ++i){
        for(int j = 1 ; j <= 9 ; ++j){
            grid[i][j] = i * j;
            if(x != grid[i][j])
                sum += grid[i][j];
        }
    }
    cout << sum;
    
    return 0;
}