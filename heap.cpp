#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    vector<int> heap;
    int n;

public:
    MinHeap(){
        n = 0;
    }
    MinHeap(int *arr, int size){
        for (int i = 0; i < size; ++i)
            heap.push_back(arr[i]);
        n = size;
        for (int i = n/2; i >= 0 ; --i) //loop from non-leaf nodes
            heapify(i);
    }
    void heapify(int i) {
        int c1 = 2*i+1, c2 = 2*i+2;
        int min = i;
        if(c1 < n && heap[c1] < heap[min])
            min = c1;
        if(c2 < n && heap[c2] < heap[min])
            min = c2;

        if(min != i){
            swap(heap[i], heap[min]);
            heapify(min);
        }
    }
    void printHeap(){
        for (int i = 0; i < n; ++i) {
            cout << heap[i] << ' ';
        }
        cout << '\n';
    }
    int extractMin(){
        if(n == 0)  //no element in heap
            return INT_MIN;
        swap(heap[0], heap[n-1]);
        n--;
        heapify(0);     //percolate_Down
        return heap[n];

    }
    void percolateUp(int n){
        if(n == 0)
            return;
        int parent = (n-1)/2;
        if(parent >= 0 && heap[n] < heap[parent]){
            swap(heap[n], heap[parent]);
            percolateUp(parent);
        }
    }
    void insert(int key){
        if(n == heap.size())
            heap.push_back(key);
        else
            heap[n] = key;
        n++;
        percolateUp(n-1);
    }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    MinHeap heap = MinHeap(arr, n);
    heap.printHeap();
    cout << heap.extractMin() << '\n';
    heap.printHeap();
    int key;
    heap.insert(key);
    heap.printHeap();

    return 0;
}