class Solution {
public:
    string findValidPair(string s) {
        string valid = "";
        map<int, int> mp;
        
        for(int i = 0 ; i < s.size() ; ++i)
            mp[s[i]]++;

        for(int i = 0 ; i < s.size() - 1 ; ++i){
            if((s[i] - '0' == mp[s[i]]) && (s[i + 1] - '0' == mp[s[i + 1]]) && (s[i] != s[i + 1])){
                valid = s.substr(i,2);
                break;
            }
        }
        return valid;
    }
};