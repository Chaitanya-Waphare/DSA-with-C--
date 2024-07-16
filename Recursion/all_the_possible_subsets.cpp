#include <iostream>
#include <vector>
using namespace std;

void Include(vector<int>& nums, vector<int>& result, int i, vector<vector<int>>& ans) {
    if (i == nums.size()){
        ans.push_back(result);
        return ;
    }
    Include(nums, result, i+1, ans);
    result.push_back(nums[i]);
    Include(nums, result, i+1, ans);
    result.pop_back(); // Backtracking: Remove the last element to backtrack
}

vector<vector<int>> Subsets(vector<int>& nums) {
    vector<int> result;
    vector<vector<int>> ans;
    Include(nums, result, 0, ans);
    return ans; // Return the generated subsets
}

int main()
{
    // Test the function
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = Subsets(nums);
    for (auto &v : ans) {
        for (auto &n : v) {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}
