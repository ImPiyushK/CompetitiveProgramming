class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost = 0;
        
        if (n > k) 
            cost += (long long)k * (long long)(n - k);
        if (m > k) 
            cost += (long long)k * (long long)(m - k);
        
        return cost;
    }
};