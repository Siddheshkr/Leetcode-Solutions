/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
	class Solution {
	public:
		int findDuplicate(vector<int>& nums) {
		while(nums[0]!=nums[nums[0]])
		swap(nums[0],nums[nums[0]]);
		return nums[0];
		}
	};

    // runtime beats 98.59 % of cpp submissions
    //  memory usage beats 42.28 % of cpp submissions (
	
// @lc code=end

