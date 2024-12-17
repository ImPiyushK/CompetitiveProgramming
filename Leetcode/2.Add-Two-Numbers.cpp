//1. total sum - sum of vector
//2. xor
class Solution {
public:
    int missingNumber(vector<int>& nums) { 
        int sum = 0; 
        int n = nums.size();
        int total = n*(n + 1)/2; 
        for (auto it : nums) { 
            sum += it;
        }
        return total - sum;
    }
};

