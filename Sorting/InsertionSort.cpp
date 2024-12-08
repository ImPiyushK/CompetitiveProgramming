#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr, int n){
    for(int i = 1 ; i < n ; ++i){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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