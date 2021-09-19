class Solution {
private:
    const vector<pair<int, int>> steps = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    bool isInsideGrid(int i, int j, int m, int n) {
        return !(i<0 || j<0 || i>=m || j>=n);
    }
    
    bool dfs(vector<vector<int>> &grid, int m, int n, int r, int c) {
        if(grid[r][c] == 1) return true;
        grid[r][c] = 1;
        
        bool n1, n2, n3, n4;
        n1 = isInsideGrid(r+1, c, m, n) && dfs(grid, m, n, r+1, c);
        n2 = isInsideGrid(r-1, c, m, n) && dfs(grid, m, n, r-1, c);
        n3 = isInsideGrid(r, c+1, m, n) && dfs(grid, m, n, r, c+1);
        n4 = isInsideGrid(r, c-1, m, n) && dfs(grid, m, n, r, c-1);
        return n1 && n2 && n3 && n4;
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int nIslands = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        for(int r=0; r<m; ++r) {
             for(int c=0; c<n; ++c) {
                 if(grid[r][c] == 0) {
                     nIslands += dfs(grid, m, n, r, c) ? 1: 0;
                 }
                 
             }
         }
         return nIslands;
        
    }
};