#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& arr, int n, int index){
    int right = 2 * index + 2;
    int left = 2 * index + 1;
    int largestNode = index;

    if (left < n  && arr[left] > arr[largestNode])
        largestNode = left ;

    if (right < n && arr[right] > arr[largestNode])
        largestNode = right  ;

    if (largestNode != index) {
        swap(arr[index], arr[largestNode])  ;
        heapify(arr, n, largestNode)  ;
    }
}

void heapSort(vector<int>& arr, int n){
    for(int i = (n/2)-1 ; i >= 0 ; --i){
        heapify(arr, n, i);
    }
    for(int i = n-1 ; i > 0 ; i--){
            swap(arr[0], arr[i]); 
            heapify(arr,i,0);
      }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    heapSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << "\n"  ;

    return 0;
}