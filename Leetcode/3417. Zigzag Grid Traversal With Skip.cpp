class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> result;

        for(int i = 0 ; i < n ; ++i){
            if(i % 2 == 0){ //evem row
                for(int j = 0 ; j < m ; j+=2)
                    result.push_back(grid[i][j]);
            }
            else{   //odd row
                for(int j = m - 1 ; j >= 0 ; j--){
                    if(j % 2 == 1)
                        result.push_back(grid[i][j]);
                }
            }
        }
        return result;
    }
};