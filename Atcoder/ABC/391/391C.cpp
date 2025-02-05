#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, q;
    cin >> n >> q;
    vector<int> pigeon(n + 1);
    vector<int> nest(n + 1, 1);
    int c = 0;

    for(int i = 1; i <= n; i++)
        pigeon[i] = i;

    while(q--){
        int query;
        cin >> query;
        if(query == 2){
            cout << c << '\n';
            continue;
        }
        int p, h;
        cin >> p >> h;
        nest[pigeon[p]]--;
        if(nest[pigeon[p]] == 1)
            c--;
        pigeon[p] = h;
        nest[h]++;
        if(nest[h] == 2)
            c++;
    }
	
    return 0;
}