
// #Use a HashMap (dictionary) to store each number and its first index.
// #As we traverse the array:
// #If a number is not seen before, store it in the map with its index.
// #If a number is already in the map, it's a repeating element. Track this index if it's the earliest repeat seen so far.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int first_repeating_index(const vector<int>& arr) {
    unordered_map<int, int> seen;  // stores element -> first index
    int min_index = arr.size();

    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        if (seen.find(num) != seen.end()) {
            min_index = min(min_index, seen[num]);
        } else {
            seen[num] = i;
        }
    }

    return (min_index == arr.size()) ? -1 : min_index;
}

int main() {
    vector<int> arr = {2, 5, 1, 2, 3, 5, 1};
    cout << first_repeating_index(arr) << endl;  // Output: 0
    return 0;
}

