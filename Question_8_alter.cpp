#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> r_list;
        vector<int> visited;
        dfs(nums, visited, r_list);
        return r_list;
    }

private:
    void dfs(vector<int>& nums, vector<int>& visited, vector<vector<int>>& r_list) {
        if (visited.size() == nums.size()) {
            r_list.push_back(visited);
            return;
        }
        unordered_set<int> seen;
        for (int i : nums) {
            if (seen.count(i) > 0) continue;
            seen.insert(i);
            visited.push_back(i);
            dfs(nums, visited, r_list);
            visited.pop_back();
        }
    }
};