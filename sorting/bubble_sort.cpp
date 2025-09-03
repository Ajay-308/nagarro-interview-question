#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> sorted = bubbleSort(arr);

    cout << "Sorted Array: ";
    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
