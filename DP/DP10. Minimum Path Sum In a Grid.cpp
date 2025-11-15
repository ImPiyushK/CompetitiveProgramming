//Recursion
class Solution {
public:
    int helperMinPathSum(vector<vector<int>>& grid, int m, int n){
        
        if(m == 0 && n == 0)
            return grid[0][0];
        if(m < 0 || n < 0)
            return INT_MAX;

        int up = helperMinPathSum(grid, m, n-1);
        int left = helperMinPathSum(grid, m-1, n);
        return grid[m][n] + min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        return helperMinPathSum(grid, m-1, n-1);
    }
};

// Memoization - Top Down
class Solution {
public:
    int helperMinPathSum(vector<vector<int>>& grid, vector<vector<int>> &dp, int i, int j){
        
        if(i == 0 && j == 0)
            return grid[0][0];
        if(i < 0 || j < 0)
            return INT_MAX;

        if(dp[i][j] != -1)
            return dp[i][j];

        int up = helperMinPathSum(grid, dp, i, j-1);
        int left = helperMinPathSum(grid, dp, i-1, j);
        return dp[i][j] = grid[i][j] + min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helperMinPathSum(grid, dp, m-1, n-1);
    }
};

// Tabulation - Bottom Up
