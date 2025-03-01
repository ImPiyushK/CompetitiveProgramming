#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& it : a)
        cin >> it;

    bool f = true;
    for(int i = 0 ; i < n - 1 ; ++i){
        if(a[i] >= a[i+1]){
            f = false;
            break;
        }
    }
    if(f)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}