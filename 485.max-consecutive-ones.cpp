/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]==1)
            {
                count++;
            }
            else
            count =0;

            maxi= max(maxi, count);
            
        }
        
        return maxi; 
    }
};
// @lc code=end

