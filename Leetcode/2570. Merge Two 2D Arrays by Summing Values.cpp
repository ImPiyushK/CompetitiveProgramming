class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int l = min(nums1.size(), nums2.size());
        
        map<int, int> mp;
        for(int i = 0 ; i < l ; ++i){
            mp[nums1[i][0]] += nums1[i][1];
            mp[nums2[i][0]] += nums2[i][1];
        }
        if(l < nums1.size()){
            for(int i = l ; i < nums1.size() ; ++i){
                mp[nums1[i][0]] += nums1[i][1];
            }
        }
        if(l < nums2.size()){
            for(int i = l ; i < nums2.size() ; ++i){
                mp[nums2[i][0]] += nums2[i][1];
            }
        }
        int j = 0;
        vector<vector<int>> ans(mp.size(), vector<int>(2, 0));
        for(auto [key, value] : mp){
            ans[j][0] = key;
            ans[j][1] = value;
            j++;
        }
        return ans;
    }
};