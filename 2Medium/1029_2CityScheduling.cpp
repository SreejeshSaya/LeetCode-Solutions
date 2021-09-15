class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int tCost(0);
        int n=costs.size()/2;
        vector<int> refund(2*n, 0);
        int i=-1;
        for(vector<int> c: costs) {
            tCost += c[0];
            refund[++i] = c[1] - c[0];
        }
        
        nth_element(refund.begin(), refund.begin() + n, refund.end());
        for(int i=0; i<n; ++i) { tCost += refund[i]; }
        return tCost;
    }
};