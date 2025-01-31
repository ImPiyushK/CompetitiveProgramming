//1. __buitin_popcount()
//2. using while loop to count bits in each number
//3. dp[n>>1] + n&1 OR ans[i/2] + i%2
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i = 0 ; i <= n ; ++i){
            ans[i] = __builtin_popcount(i);
        }
        return ans;
    }
};

class Solution {
public:

    int count(int n){
        int c = 0;
        while(n != 0){
            if(n % 2 != 0)
                c++;
            n /= 2;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i = 0 ; i <= n ; ++i){
            ans[i] = count(i);
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;
        for(int i = 0 ; i <= n ; ++i){
            ans[i] = ans[i/2] + i%2;
        }
        return ans;
    }
};