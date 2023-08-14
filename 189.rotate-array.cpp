/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            // by using mod andformula temp[i+k%n]= nums[i]
            temp[(i + k) % nums.size()] = nums[i];
        }
        // copying temp into nums vector
        nums = temp;
    }
};
// @lc code=end
