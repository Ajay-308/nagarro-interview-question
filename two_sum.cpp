#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> twoSum3(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// using Hashmap
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashmap; 
    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];
        if (hashmap.find(diff) != hashmap.end()) {
            return {hashmap[diff], i};
        }
        hashmap[nums[i]] = i;
    }
    return {};
}

// Time Complexity: O(n)
// Space Complexity: O(n)

// using two pointers
vector<int> twoSum2(vector<int>& nums, int target) {
    vector<pair<int,int>> arr;
    for (int i = 0; i < nums.size(); i++) {
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end()); // sorts by value

    int i = 0, j = arr.size() - 1;
    while (i < j) {
        int sum = arr[i].first + arr[j].first;
        if (sum == target) {
            return {arr[i].second, arr[j].second};
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }
    return {};
}

// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(n)