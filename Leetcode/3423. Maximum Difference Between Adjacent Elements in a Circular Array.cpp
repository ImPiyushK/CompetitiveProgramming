class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxDiff = abs(nums[0] - nums[n-1]);

        for(int i = 0 ; i < n - 1 ; ++i){
            int t = abs(nums[i] - nums[i+1]);
            if(t > maxDiff)
                maxDiff = t;
        }
        return maxDiff;
    }
};