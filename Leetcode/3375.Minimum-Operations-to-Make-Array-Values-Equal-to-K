class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), op = 0;
        
        for(int i = n -1 ; i >= 0 ; --i){
            while(i != 0 && nums[i] == nums[i - 1]){
                i--;
            }
            if(nums[i] < k) 
                return -1;
            if(nums[i] != k) 
                op++;
        }
        return op;
    }
};