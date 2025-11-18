class Solution {
public:
    bool helperCanPartition(vector<int> &nums, int t, int i) {

        if(t == 0)
            return true;
        if(i == 0)
            return nums[i] == t;
        bool take = false;
        if(t >= nums[i])
            take = helperCanPartition(nums, t-nums[i], i - 1);

        bool notTake = helperCanPartition(nums, t, i - 1);

        return (take || notTake);
        
    }    
    bool canPartition(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for(int i = 0 ; i < n; ++i)
            sum += nums[i];
        if (sum % 2 != 0)
            return false;
        return helperCanPartition(nums, sum/2, n-1);
    }
};  