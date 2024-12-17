/*
1. 2 loops i and i+1
2. Sorting
3. set
4. map
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        return nums.size() > st.size();
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0 ; i < nums.size() ; ++i){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second >= 2)
                return true;
        }
        return false;
    }
};