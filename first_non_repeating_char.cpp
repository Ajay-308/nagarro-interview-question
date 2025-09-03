#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingChar(const string& s) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char ch : s) {
        freq[ch]++;
    }

    // Find first non-repeating character
    for (char ch : s) {
        if (freq[ch] == 1) {
            return ch;
        }
    }

    return '_'; // if no non-repeating character found
}

int main() {
    string s = "aaabbkcaabbbddd";
    cout << firstNonRepeatingChar(s) << endl; // Output: k
    return 0;
}
