#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int minIndex = i;

        // Find index of the minimum element in remaining unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the element at index i
        swap(arr[i], arr[minIndex]);
    }

    return arr;
}

int main() {
    vector<int> arr = {5, 3, 8, 4, 2};
    vector<int> sorted = selectionSort(arr);

    cout << "Sorted array: ";
    for (int x : sorted) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
