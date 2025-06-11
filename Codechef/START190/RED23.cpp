#include <bits/stdc++.h>
using namespace std;

// Function to find minimum possible value of X
int reduceNumber(int x) {
    queue<int> q;
    set<int> visited;

    q.push(x);
    visited.insert(x);

    int minVal = x;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        minVal = min(minVal, current);

        // Operation 1: If even, divide by 2
        if (current % 2 == 0 && visited.find(current / 2) == visited.end()) {
            q.push(current / 2);
            visited.insert(current / 2);
        }

        // Operation 2: If greater than 3, subtract 3
        if (current > 3 && visited.find(current - 3) == visited.end()) {
            q.push(current - 3);
            visited.insert(current - 3);
        }
    }

    return minVal;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;
        cout << reduceNumber(X) << endl;
    }

    return 0;
}