#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;

    // Calculate how many more wins are needed
    int remaining = 25 - X;

    // Each year Chef can win 4 Grand Slams, so compute the ceiling of (remaining / 4)
    int years = (remaining + 3) / 4; // This ensures ceiling division

    cout << years << endl;

    return 0;
}