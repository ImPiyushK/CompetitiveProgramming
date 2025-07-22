class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> seen;
        int l = 0, curSum = 0, maxSum = 0;

        for(int r = 0 ; r < n ; ++r){
            while(seen.find(nums[r]) != seen.end()){
                curSum -= nums[l];
                seen.erase(nums[l]);
                ++l;
            }
            curSum += nums[r];
            seen.insert(nums[r]);
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};