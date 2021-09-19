class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& g) {
        int n = g.size();
        vector<vector<int>> mh(n, vector<int>(n, 0));
        vector<int> mr(n, 0);
        vector<int> mc(n, 0);
        for(int r=0; r<n; ++r) {
            for(int c=0; c<n; ++c) {
                mr[r] = max(mr[r], g[r][c]);
                mc[c] = max(mc[c], g[r][c]);
            }
        }
        
        int s=0;
        for(int r=0; r<n; ++r) {
            for(int c=0; c<n; ++c) {
                s += min(mr[r], mc[c]) - g[r][c];
            }
        }
        
        return s;
    }
};