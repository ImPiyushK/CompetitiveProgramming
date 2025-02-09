class Solution {
    public:
        vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
            int n = grid.size();
            unordered_map<int, vector<int>> digMap;
    
            for(int i = 0 ; i < n ; ++i){
                for(int j = 0 ; j < n ; ++j){
                    digMap[i-j].push_back(grid[i][j]);
                }
            }
            
            for(auto &it : digMap){
                if(it.first >= 0)
                    sort(it.second.begin(), it.second.end());
                else 
                    sort(it.second.rbegin(), it.second.rend());
            }
    
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    // grid[i][j] = digMap[i - j].front();
                    // digMap[i - j].erase(digMap[i - j].begin());
                    grid[i][j] = digMap[i - j].back();
                    digMap[i - j].pop_back();
                }
            }
            return grid;
        }
    };