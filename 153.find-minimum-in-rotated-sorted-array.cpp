/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0;
        int h = nums.size() - 1;
        int ans = INT_MAX;
        while (l <= h)
        {
            int m = (l + h) / 2;

            if (nums[l] <= nums[h])
            {
                ans = min(ans, nums[l]);
            }

            if (nums[l] <= nums[m])
            {
                ans = min(ans, nums[l]);
                l = m + 1;
            }
            else
            {
                ans = (ans, nums[m]);
                h = m - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
