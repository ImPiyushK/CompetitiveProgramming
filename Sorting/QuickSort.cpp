#include<bits/stdc++.h>
using namespace std;

//Striver Method
int partition(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }

        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

//Method used in CLRS
int partition2(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int k = low;
    for(int i = low + 1 ; i <= high ; ++i){
        if(arr[i] <= pivot){
            k++;
            swap(arr[k], arr[i]);
        }
    }
    swap(arr[low], arr[k]);
    return k;
}

void qs(vector<int>& arr, int low, int high){
    if(low < high){ //more than 1 element in array
        //find pivot, place it at its correct position and return which pos it's placed at
        int pi = partition(arr, low, high); 
        // int pi = partition2(arr, low, high); //CLRS Method
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
}

int main(){
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr)/sizeof(arr[0]); 

    qs(arr, 0, n - 1);

    cout << "Sorted array: \n";
    for (int num : arr)
        cout << " " << num;
    cout << '\n';
}