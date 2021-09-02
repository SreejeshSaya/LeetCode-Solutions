class Solution {
private:
    bool isOutofBounds(int r, int c, int row, int col) {
        if(r<0 || c<0 || r>=row || c>=col) return true;
        return false;
    }
    
    int surroundingWater(vector<vector<int>> &grid, int row, int col, int r, int c) {
        int cnt=0;
        vector<pair<int, int>> sides{{-1,0}, {1,0}, {0,-1}, {0,1}};
        for(pair<int, int> step: sides) {
            int x = r + step.first;
            int y = c + step.second;
            
            if(isOutofBounds(x, y, row, col) || grid[x][y] == 0) ++cnt;            
        }
        return cnt;
    }
    
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int perim=0;
        
        for(int r=0; r<row; ++r) {
            for(int c=0; c<col; ++c) {
                if(grid[r][c] == 1) perim += surroundingWater(grid, row, col, r, c);
            }
        }
        
        return perim;
    }
};