class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int c=0;
        for(int i=0; i<costs.size(); ++i) {
            coins -= costs[i];
            if(coins < 0) return c;
            ++c;
        }
        return costs.size();
    }
};