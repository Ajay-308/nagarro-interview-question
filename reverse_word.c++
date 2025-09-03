#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "my name is ajay";
    string result;
    string word;

    for (char c : s) {
        if (c == ' ') {
            reverse(word.begin(), word.end()); // reverse current word
            result += word + " ";
            word.clear();
        } else {
            word += c; // build current word
        }
    }

    // reverse and add the last word
    if (!word.empty()) {
        reverse(word.begin(), word.end());
        result += word;
    }

    cout << result << endl; // Output: "ym eman si yaja"
    return 0;
}
