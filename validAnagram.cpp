#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;
    for (char c : t) {
        freq[c - 'a']--;
        if (freq[c - 'a'] < 0) return false;
    }
    return true;
}