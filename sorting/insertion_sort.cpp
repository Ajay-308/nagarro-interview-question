#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];   // Element to be inserted
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at the right position
        arr[j + 1] = key;
    }

    return arr;
}

int main() {
    vector<int> arr = {5, 3, 8, 4, 2};
    vector<int> sorted = insertionSort(arr);

    cout << "Sorted array: ";
    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
