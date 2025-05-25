class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost = 0;
        while(n > k){
            cost += (long long)k * (long long)(n-k);
            n -= k;
        }
        while(m > k){
            cost += (long long)k * (long long)(m-k);
            m -= k;
        }
        return cost;
    }
};