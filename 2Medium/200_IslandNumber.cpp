class Solution {
private:
    const vector<pair<int, int>> steps = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    
    bool isInsideGrid(int i, int j, int m, int n) {
        return !(i<0 || j<0 || i>=m || j>=n);
    }
    
    void dfs(vector<vector<char>> &grid, int m, int n, int r, int c) {
        grid[r][c] = '-';
        for(pair<int, int> s: steps) {
            int nr = r+s.first;
            int nc = c+s.second;
            if(isInsideGrid(nr, nc, m, n) && grid[nr][nc]=='1')
                dfs(grid, m, n, nr, nc);
        }
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int nIslands = 0;
        int m=grid.size();
        int n=grid[0].size();
        for(int r=0; r<m; ++r) {
            for(int c=0; c<n; ++c) {
                if(grid[r][c] == '1') {
                    dfs(grid, m, n, r, c);
                    nIslands++;
                }
                
            }
        }
        return nIslands;
    }
};