#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n <= 2){
            cout << n << '\n';
            continue;
        }

        int reached = 1;
        int count = 1;
        while(1){
            if(reached >= n)
                break;
            count++;
            reached = (reached * 2 + 2);
        }
        cout << count << '\n';
    }
    return 0;
}