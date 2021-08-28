class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxAmt=0;
        for(vector<int> customer: accounts) {
            int amt=0;
            for(int w: customer) amt += w;
            maxAmt = max(maxAmt, amt);
        }
        
        return maxAmt;
    }
};