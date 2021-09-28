class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> m = matrix;
        int n=m.size();
        for(int i=1; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                int l, r, t;
                l = m[i-1][max(j-1, 0)];
                r = m[i-1][min(j+1, n-1)];
                t = m[i-1][j];
                m[i][j] += min(l, min(r, t));
            }
        }
        return *min_element(m[n-1].begin(), m[n-1].end());
    }
};