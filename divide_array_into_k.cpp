#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        if (n % 3 != 0) return {}; // cannot divide equally

        for (int i = 0; i < n; i += 3) {
            vector<int> group = {nums[i], nums[i+1], nums[i+2]};
            if (group[2] - group[0] > k) return {};
            ans.push_back(group);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 4, 9, 10, 12};
    int k = 3;
    auto res = sol.divideArray(nums, k);

    if (res.empty()) {
        cout << "Not possible" << endl;
    } else {
        for (auto &g : res) {
            for (int x : g) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
