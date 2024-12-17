//1. total sum - sum of vector
//2. xor
//3.binary search
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

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =1;i<=n;i++){
            ans = ans ^ i;
        }
        for(int i =0;i<nums.size();i++){
            ans= ans^nums[i];
        }
        return ans;
    }
};

public int missingNumber(int[] nums) { //binary search
    Arrays.sort(nums);
    int left = 0, right = nums.length, mid= (left + right)/2;
    while(left<right){
        mid = (left + right)/2;
        if(nums[mid]>mid) right = mid;
        else left = mid+1;
    }
    return left;
}