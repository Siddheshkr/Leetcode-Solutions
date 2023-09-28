/*
 * @lc app=leetcode id=1903 lang=cpp
 *
 * [1903] Largest Odd Number in String
 */

// @lc code=start
class Solution
{
public:
    string largestOddNumber(string num)
    {
        for (int i = num.size() - 1; i >= 0; i--)
        {
            if (num[i] % 2 == 0)
                num.pop_back();
            else
                break;
        }
        return num;
    }
};
// @lc code=end
