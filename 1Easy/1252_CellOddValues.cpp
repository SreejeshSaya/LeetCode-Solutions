class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> mat(m, vector<int>(n, 0));
        
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        
        for(vector<int> i: indices) {
            row[i[0]]++;
            col[i[1]]++;
        }
        
        int colOdd=0;
        for(int c: col) { if(c&1) colOdd++; }
        
        int cnt=0;
        for(int r: row) {
            if((r&1) == 0) cnt += colOdd;
            else cnt += (n-colOdd);
        }
        
        return cnt;
    }
};