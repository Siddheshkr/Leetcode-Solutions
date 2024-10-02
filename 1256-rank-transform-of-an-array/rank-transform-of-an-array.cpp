class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map <int, int> mp;
        set <int> s;
        for(int i=0;i<arr.size();i++)
            s.insert(arr[i]);          // making set that contains unique element in sorted order
        int rank = 1;
        for(auto &i : s)
            mp[i] = rank,++rank;       // assinging rank to unique elements 
        for(int i = 0; i < arr.size(); i++)
            arr[i] = mp[arr[i]];
        return arr;
    }
};