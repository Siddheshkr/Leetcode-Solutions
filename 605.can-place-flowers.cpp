/*
 * @lc app=leetcode id=605 lang=cpp
 *
 * [605] Can Place Flowers
 */

// @lc code=start
class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        for (int i = 0; i < flowerbed.size(); i++)
        {
            if (flowerbed[i] == 0)
            {
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
                {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        return (n <= 0);
    }
};
// @lc code=end
