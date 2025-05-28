#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long min_time = (long long)n;
    set<long long> candidate_ks_set;
    candidate_ks_set.insert(0);
    for (long long val : a){
        candidate_ks_set.insert(val);
        if (val - 1 >= 0){
            candidate_ks_set.insert(val - 1);
        }
    }

    for (long long k_val : candidate_ks_set){
        long long time_for_aoe = k_val;
        auto it_upper = upper_bound(a.begin(), a.end(), k_val);
        long long num_individual_kills = distance(it_upper, a.end());
        long long current_total_time = time_for_aoe + num_individual_kills;
        if (current_total_time < min_time){
            min_time = current_total_time;
        }
    }
    cout << min_time << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}