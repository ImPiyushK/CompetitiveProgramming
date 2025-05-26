class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> letter(26, 0);
        int maxVowel = 0, maxCon = 0;
        for(int i = 0 ; i < s.size() ; ++i){
            letter[s[i] - 'a']++;
        }

        for(int  i = 0 ; i < 26 ; ++i){

            if(i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
                maxVowel = max(maxVowel, letter[i]);
            }
            else
                maxCon = max(maxCon, letter[i]);
        }
        return maxVowel + maxCon;
    }
};