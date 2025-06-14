class Solution {
public:
    void findSubset(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans) {
        ans.push_back(ds);

        for (int i = ind; i < nums.size(); i++) {
            // Skip duplicates
            if (i > ind && nums[i] == nums[i - 1]) continue;

            ds.push_back(nums[i]); // Include current element
            findSubset(i + 1, nums, ds, ans); // Recurse with next index
            ds.pop_back(); // Backtrack
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> ans;
        vector<int> ds;
        findSubset(0, nums, ds, ans);
        return ans;
    }
};
