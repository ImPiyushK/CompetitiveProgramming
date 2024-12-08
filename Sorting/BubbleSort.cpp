#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr, int n){
    int n = arr.size();
    bool swapped;
    for(int i = 0 ; i < n - 1; ++i){
        swapped = false;
        for(int j = 0 ; j < n - i - 1 ; ++j){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)    //If in any pass no of swaps = 0; stop the algo - array already sorted
            break;
    }
}

int main(){
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]); 

    sort(arr, n);

    cout << "Sorted array: \n";
    for (int num : arr)
        cout << " " << num;
    cout << '\n';
}