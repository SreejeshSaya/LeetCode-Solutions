class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int l=0, r=n-1;
        int sum=0;
        for(vector<int> row: mat) {
            sum += row[l] + row[r];
            ++l; --r;
        }
        if(n&1) sum-= mat[n/2][n/2];
        return sum;
    }
};