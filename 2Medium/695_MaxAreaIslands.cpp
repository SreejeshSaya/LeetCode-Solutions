class Solution {
private:
    const vector<pair<int, int>> steps = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    vector<vector<bool>> v;
    int maxArea;
    int area;
    bool isInsideGrid(int i, int j, int r, int c) { return !(i<0 || j<0 || i>=r || j>=c); }
    
    void dfs(vector<vector<int>> &g, int i, int j) {
        ++area;
        int r=g.size();
        int c=g[0].size();
        
        v[i][j] = true;
        for(pair<int, int> s: steps) {
            int ni = i+s.first;
            int nj = j+s.second;
            if(isInsideGrid(ni, nj, r, c) && g[ni][nj] == 1 && v[ni][nj]==false)
                dfs(g, ni, nj);
        }
        
    }
        
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        
        maxArea=0;
        
        v.clear();
        v.resize(r, vector<bool>(c, false));
        
        for(int i=0; i<r; ++i) {
            for(int j=0; j<c; ++j) {
                if(grid[i][j] == 1 && v[i][j] == false) {
                    area = 0;
                    dfs(grid, i, j);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};