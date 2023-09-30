/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length()!=goal.length())
            return false;

        string str = s + s;
        size_t found = str.find(goal);
       
        if(found != string::npos){
            return true;
        }
        else{
            return false;
        }

    }
};
// @lc code=end

