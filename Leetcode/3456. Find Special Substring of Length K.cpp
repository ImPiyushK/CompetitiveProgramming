class Solution {
    public:
        bool hasSpecialSubstring(string s, int k) {
            int c = 1;
            bool flag = false;
    
            for(int i = 0 ; i < s.size() - 1 ; ++i){
                if(s[i] == s[i+1]){
                    c++;
                }
                else{
                    if(c == k)
                        flag = true;
                    c = 1;
                }
            } 
            if(c==k)
                flag = true;
            return flag;
        }
};