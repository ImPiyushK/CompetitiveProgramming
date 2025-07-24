#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        int n, m;  // n is the size of array a, m is the size of array b (m = 1)
        cin >> n >> m;
        vector<int> a(n);
        int b1;
        
        // Read the array a
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Read the array b (which has only one element)
        cin >> b1;
        
        // We will keep track of the previous value selected to maintain the sorted order
        int previous = min(a[0], b1 - a[0]);  // Initial choice for the first element
        
        bool possible = true;
        
        // Iterate through the array a from the second element
        for (int i = 1; i < n; i++) {
            int choice1 = a[i];      // If we keep a[i]
            int choice2 = b1 - a[i]; // If we replace a[i] with b1 - a[i]
            
            // Choose the smallest valid value that maintains the non-decreasing order
            if (min(choice1, choice2) >= previous) {
                previous = min(choice1, choice2);
            } else if (max(choice1, choice2) >= previous) {
                previous = max(choice1, choice2);
            } else {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
