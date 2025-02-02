class Solution {
public:
    int maxDifference(string s) {
    vector<int> freq(26, 0);
    int maxOdd = 0, minEven = 100;
    
    for(int i = 0; i < s.size(); ++i) 
        freq[s[i] - 'a']++;
    for(int i = 0; i < freq.size(); ++i){
        if(freq[i] != 0 && freq[i]%2 == 0) 
            minEven = min(minEven, freq[i]);
        else 
            maxOdd = max(maxOdd, freq[i]);
    }
    return maxOdd - minEven;
}
};