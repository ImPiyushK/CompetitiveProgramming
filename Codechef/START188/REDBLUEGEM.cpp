#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, B, P, Q;
    cin >> R >> B >> P >> Q;

    int redValue = R * P;
    int blueValue = B * Q;

    cout << max(redValue, blueValue) << endl;

    return 0;
}