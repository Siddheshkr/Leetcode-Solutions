/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;

        for (int j = 0; j < nums.size(); j++)
        {
            if(nums[j] != 0){
            swap(nums[j], nums[i]);
            i++;

            }
        }
        
        
    }
};
// @lc code=end

