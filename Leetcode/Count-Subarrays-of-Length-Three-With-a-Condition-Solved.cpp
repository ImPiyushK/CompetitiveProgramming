class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for(int i = 2 ; i < n ; ++i){
            if((double)(nums[i-2] + nums[i]) == (double)nums[i-1]/2.0)
                c++;
        }
        return c;
    }
};