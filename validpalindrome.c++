#include <iostream>
#include <string>
#include <cctype>   // for isalnum, tolower
using namespace std;

class Solution1 {
public:
    bool isPalindrome(string s) {
        string res;
        
        // filter only alphanumeric and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                res.push_back(tolower(c));
            }
        }

        // check palindrome
        int left = 0, right = res.size() - 1;
        while (left < right) {
            if (res[left] != res[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution1 sol;
    cout << boolalpha << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;
    return 0;
}
