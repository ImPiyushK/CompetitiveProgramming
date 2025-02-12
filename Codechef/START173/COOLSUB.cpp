#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> getFirstRepeatingElement(vector<int>& arr) {
    unordered_map<int, int> frequency;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (++frequency[arr[i]] > 1) {
            return {arr[i]};
        }
    }
    return {};
}

void processTest() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result = getFirstRepeatingElement(arr);

    if (!result.empty()) {
        cout << result.size() << endl;
        for (int num : result) {
            cout << num << " ";
        }
        cout << '\n';
    } else {
        cout << -1 << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("E:/Workspaces/CompetitiveProgramming/input.in", "r", stdin);
    freopen("E:/Workspaces/CompetitiveProgramming/output.in", "w", stdout);
    #endif

    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        processTest();
    }

    return 0;
}
