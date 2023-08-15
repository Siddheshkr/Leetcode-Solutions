/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int end= s.size()-1;

        while(st<end){

        swap(s[st++], s[end--]);
        }

        
    }
};
// @lc code=end

