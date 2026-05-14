class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;

        // Size must be at least 2
        if (nums.size() < 2) return false;

        sort(nums.begin(), nums.end());

        // Check 1 to n-1
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != i + 1) {
                return false;
            }
        }

        // Last two numbers should be n
        return nums[n - 1] == n && nums[n] == n;
    }
};