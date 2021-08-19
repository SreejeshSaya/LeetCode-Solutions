class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> c(n+1, 0);
        c[0]=cost[0];
        c[1]=cost[1];
        int step;
        for(step=2; step<n; ++step) {
            c[step]= min(c[step-1], c[step-2]) + cost[step];
        }
        c[n]=min(c[step-1], c[step-2]);
        return c[n];
    }
};