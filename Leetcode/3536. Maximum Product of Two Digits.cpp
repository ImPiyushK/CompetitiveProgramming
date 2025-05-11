class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;

        while(n != 0){
            int x = n % 10;
            v.push_back(x);
            n /= 10;
        }
        sort(v.begin(), v.end());
        return v[v.size()-1] * v[v.size()-2];
    }
};


//OR

class Solution {
public:
    int maxProduct(int n) {
        int a = INT_MIN, b = INT_MIN;
        while(n != 0){
            int x = n % 10;
            if(x >= a){
                b = a;
                a = x;
            }
            else if(x > b){
                b = x;
            }
            n /= 10;
        }
        return a * b;
    }
};