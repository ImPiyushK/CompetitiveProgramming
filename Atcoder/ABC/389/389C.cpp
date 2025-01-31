#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {

    fastio

    long long n; 
    cin >> n;
    vector<long long> vec(1, 0);
    long long f = 0;

    while(n--){
        long long op;
        cin >> op;
        if(op == 1){
            long long l;
            cin >> l;
            vec.push_back(vec.back() + l);
        }
        else if(op == 2){
            f++;
        }
        else{
            long long k;
            cin >> k;
            k--;
            cout << vec[f + k] - vec[f] << '\n';
        }
    }
    return 0;
}