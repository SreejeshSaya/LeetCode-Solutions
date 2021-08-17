class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> g(n, vector<int>(m, 0));
        for(int c=0; c<m; ++c) g[0][c]=1;
        for(int r=0; r<n; ++r) g[r][0]=1;
        
        for(int r=1; r<n; ++r) {
            for(int c=1; c<m; ++c) {
                g[r][c] = g[r-1][c] + g[r][c-1];
            }
        }
        
        return g[n-1][m-1];
    }
};