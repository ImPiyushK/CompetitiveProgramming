#include <bits/stdc++.h>

using namespace std;

struct ArrayData {
    long long sum;    // Total sum of elements in the array
    long long score;  // Score of the array (sum of prefix sums)
};

// Function to compute sum and score for each array
ArrayData computeArrayData(int m) {
    long long arraySum = 0, prefixSum = 0, arrayScore = 0;
    for (int j = 0; j < m; j++) {
        int x;
        cin >> x;
        arraySum += x;
        prefixSum += x;
        arrayScore += prefixSum;
    }
    return {arraySum, arrayScore};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<ArrayData> arr(n);
        long long totalScoreSum = 0; // Sum of scores of all arrays

        for (int i = 0; i < n; i++) {
            arr[i] = computeArrayData(m);
            totalScoreSum += arr[i].score;
        }

        // Sort arrays in descending order based on their total sum
        sort(arr.begin(), arr.end(), [](const ArrayData &A, const ArrayData &B) {
            return A.sum > B.sum;
        });

        long long weightedSum = 0;
        for (int r = 0; r < n; r++) {
            weightedSum += (long long)(n - 1 - r) * arr[r].sum;
        }

        long long result = totalScoreSum + m * weightedSum;
        cout << result << "\n";
    }
    
    return 0;
}
