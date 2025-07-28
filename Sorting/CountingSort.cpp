 #include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr, int n){

    //if array empty
    if (n == 0)     
        return {};

    // find the maximum element
    int maxval = arr[0];
    for (int i = 1; i < n; i++)
        maxval = max(maxval, arr[i]);

    // create and initialize count array
    vector<int> count(maxval + 1, 0);

    // count frequency of each element
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    // compute prefix sum for Stable Sort
    for (int i = 1; i <= maxval; i++)
        count[i] += count[i - 1];

    // build output array Stable
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        count[arr[i]]--;
        ans[count[arr[i]]] = arr[i];
    }

    return ans;
}

int main(){
    vector<int> arr = {2, 5, 3, 0, 2, 3, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]); 

    vector<int> ans = countingSort(arr, n);

    cout << "Sorted array: \n";
    for (int num : ans)
        cout << " " << num;
    cout << '\n';
}