#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.size();
    deque<int> dq;
    
    // Initialize deque with all occurrences of "WA"
    for (int i = 0; i < n - 1; i++) {
        if (S[i] == 'W' && S[i+1] == 'A') {
            dq.push_back(i);
        }
    }
    
    // Process occurrences from leftmost to right
    while (!dq.empty()) {
        int i = dq.front();
        dq.pop_front();
        // Check if "WA" still exists at this index (it may have been modified)
        if (i < 0 || i+1 >= n) continue;
        if (S[i] == 'W' && S[i+1] == 'A') {
            // Replace "WA" with "AC"
            S[i] = 'A';
            S[i+1] = 'C';
            // After replacement, a new "WA" might now form with the left neighbor.
            if (i - 1 >= 0 && S[i-1] == 'W' && S[i] == 'A') {
                dq.push_front(i - 1);
            }
        }
    }
    
    cout << S << endl;
    return 0;
}
