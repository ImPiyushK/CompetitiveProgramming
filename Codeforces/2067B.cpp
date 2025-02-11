#include <iostream>
#include <vector>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

/**
 * Function to check whether the given sequence can be transformed as per the logic.
 */
void canFormSequence() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> count(1001, 0); // Frequency array

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        count[a[i]]++;
    }

    for (int i = 0; i < 1001; ++i) {
        if (count[i] == 0) continue;
        if (count[i] == 1) {
            cout << "No\n";
            return;
        }
        count[i + 1] += (count[i] - 2);
    }

    cout << "Yes\n";
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif

    fastio

    int t;
    cin >> t;
    while (t--) {
        canFormSequence();
    }

    return 0;
}
