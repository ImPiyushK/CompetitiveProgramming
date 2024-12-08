#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr, int n){
    for(int i = 0 ; i < n ; ++i){
        int min = i;
        for(int j = i + 1 ; j < n ; ++j){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
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