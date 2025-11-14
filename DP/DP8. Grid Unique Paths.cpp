class Solution {
public:
    int dp[101][101];
    int uniquePathHelper(int m, int n){
        if(m == 0 && n == 0)
            return 1;
        if(m < 0 || n < 0)
            return 0;
        return uniquePathHelper(m-1, n) + uniquePathHelper(m, n-1);
    }
    int uniquePaths(int m, int n) {
        return uniquePathHelper(m-1, n-1);  //m, n is grid position not indices
    }
};

class Solution {
public:
    int uniquePathHelper(int m, int n, vector<vector<int>> &dp){
        if(m == 0 && n == 0)
            return 1;
        if(m < 0 || n < 0)
            return 0;
        if(dp[m][n] != -1)
            return dp[m][n];
        dp[m][n] = uniquePathHelper(m-1, n, dp) + uniquePathHelper(m, n-1, dp);
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return uniquePathHelper(m-1, n-1, dp);  //m, n is grid position not indices
    }
};

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n, 1);
        for (int i = 1; i < m; i++){
            vector<int> temp(n, 1);
            for (int j = 1; j < n; j++){
                temp[j] = prev[j] + temp[j-1];
            }
            prev = temp;
        }
        
        return prev[n-1];

    }
};