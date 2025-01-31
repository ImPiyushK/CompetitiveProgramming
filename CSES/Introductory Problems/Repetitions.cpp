#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
    cin >> s;
    long long res = 1, c = 1;

    for(long long i = 0 ; i < s.size() - 1 ; ++i){
        if(s[i] == s[i + 1])
            c++;
        else 
            c = 1;

        if(res < c)
            res = c;
    }    
    cout << res;

    return 0;
}