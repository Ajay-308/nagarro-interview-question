#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthLargest(vector<int>& arr, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap

    for (int num : arr) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    return minHeap.top(); // kth largest element
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int k = 3;
    cout << k << "rd largest element is " << kthLargest(arr, k) << endl;
    return 0;
}
