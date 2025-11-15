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