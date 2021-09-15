class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        int r(mat.size()), c(mat[0].size());
        vector<vector<int>> dp(r+1, vector<int>(c+1, 0));
        
        int maxLen(0);

        for(int i=1; i<=r; ++i) {
            for(int j=1; j<=c; ++j) {
                if(mat[i-1][j-1] == '1') {
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) + 1;
                    maxLen = max(maxLen, dp[i][j]);
                }
                else dp[i][j] = 0;
            }
        }
        return maxLen * maxLen;
    }
};