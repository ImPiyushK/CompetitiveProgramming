#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    // Store count of occurrences
    // in count[]
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i]
    // now contains actual position
    // of this digit in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[--count[digit]] = arr[i];
    }
    //OR Upper Method is more efficient
    // for (int i = n - 1; i >= 0; i--) {
    //     output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    //     count[(arr[i] / exp) % 10]--;
    // }

    // Copy the output array to arr[],
    // so that arr[] now contains sorted
    // numbers according to current digit
    arr = output;
    
}

void radixSort(vector<int> &arr, int n){
    
    // to get maximum value     OR      *max_element(arr.begin(), arr.end());
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];

    // Apply counting sort for each digit (LSD to MSD)
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, exp);   
}

int main(){
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]); 

    radixSort(arr, n);

    cout << "Sorted array: \n";
    for (int num : arr)
        cout << " " << num;
    cout << '\n';
}