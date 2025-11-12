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