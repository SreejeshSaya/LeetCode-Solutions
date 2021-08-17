class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        if(og[0][0]==1) return 0;
        
        int n=og.size();
        int m=og[0].size();
        
        og[0][0]=1;
        
        for(int c=1; c<m; ++c) {
            if(og[0][c]) og[0][c]=0;
            else og[0][c] = og[0][c-1];
        }
        
        for(int r=1; r<n; ++r) {
            if(og[r][0]) og[r][0]=0;
            else og[r][0] = og[r-1][0];
        }
        
        for(int r=1; r<n; ++r) {
            for(int c=1; c<m; ++c) {
                if(og[r][c]==0)
                    og[r][c] = og[r-1][c] + og[r][c-1];
                else og[r][c] = 0;
            }
        }
        
        return og[n-1][m-1];
    }
};


// Faced same problem in Gameskraft test ong 16th August 2021.
// Free nodes had 1 instead of 0
// Obstacles had 0 instead of 1
/*
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        if(og[0][0]==0) return 0;
        
        int n=og.size();
        int m=og[0].size();
              
        for(int r=1; r<n; ++r) {
            for(int c=1; c<m; ++c) {
                if(og[r][c]==1) og[r][c] = og[r-1][c] + og[r][c-1];
            }
        }
        
        return og[n-1][m-1];
    }
*/

// Didn't submit this code, used dfs and bottom-up approach instead