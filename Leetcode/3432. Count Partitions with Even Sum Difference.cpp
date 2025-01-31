class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int r = accumulate(nums.begin() + 1, nums.end(), 0);
        int l = nums[0], par = 0;
        for(int i = 1 ; i < n ; ++i){
            if(abs(l - r) % 2 == 0)
                par++;
            l += nums[i];
            r -= nums[i];
        }
        return par;
    }
};