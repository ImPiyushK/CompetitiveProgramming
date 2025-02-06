// __builtin_clz(x): the number of zeros at the beginning of the number 
// __builtin_ctz(x): the number of zeros at the end of the number
// __builtin_popcountll(x): the number of ones in the number
// __builtin_parity(x): the parity (even or odd) of the number of ones
// __builtin_ffs(int) finds the index of the first (most right) set bit
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define nl "\n"
#define pb push_back
#define eb emplace_back
#define Sort(a) sort(a.begin(),a.end())
#define vi vector<int>
#define vll vector<long long>
#define F first
#define S second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // freopen("input06.txt","r",stdin);
    // freopen("output06.txt","w",stdout);
int T;
cin>>T;
while(T--)
{    
    string a,b; cin>>a>>b;
    if(b.size() > a.size()){cout<<-1<<endl; continue;}
    int ind = b.size()-1;
    set<int>s;
    for(int i = a.size()-1;i>=0;i--)
    {
        if(a[i] == b[ind])
        {
            ind--;
            s.insert(i);
            if(ind == -1) break;
        }
    }
    if(ind != -1) {cout<<-1<<endl; continue;}
    ll ans = 0;
    ll ct = 1;
    for(int i = 0;i<a.size();i++)
    {
        if(s.find(i) == s.end())
        {
            ans += ct;
        }
        else
        {
            ct++;
        }
    }
    cout<<ans<<endl;
}
return 0;
}