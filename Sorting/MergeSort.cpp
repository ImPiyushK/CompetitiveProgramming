#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high){
    int left = low; // starting index of left half of arr
    int right = mid + 1;    // starting index of right half of arr
    vector<int> temp;

    //storing elements in the temporary array in a sorted manner
    while ((left <= mid) && (right <= high)) {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // if elements on the left half are still left
    while(left <= mid){ 
        temp.push_back(arr[left]);
        left++;
    }
    // if elements on the right half are still left
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    // transfering all elements from temporary to arr
    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];//(i-mid) for temp(dry run) so it works fine when merging small halfs of array which are sorted
    }    
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);   //left half
    mergeSort(arr, mid + 1, high);  //right half
    merge(arr, low, mid, high); //merge sorted half
}

int main(){
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]); 

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: \n";
    for (int num : arr)
        cout << " " << num;
    cout << '\n';
}