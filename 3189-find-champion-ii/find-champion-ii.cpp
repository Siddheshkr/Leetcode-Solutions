
class Solution {
public:
    int findChampion (int n, vector<vector<int>>& edges) {
        vector<int>vis (n, 0);
        for (auto it: edges) {
            vis [it [1]]=1;
        }
        int count=0;
        for (int i=0; i<n; i++){
            if(vis[i]==0) {
                count++;
            }
        }
        if (count>1) return -1;
        for (int i=0; i<n; i++){
            if(vis[i]==0) {
                return i;
            }
        }
        return -1;
    }
};