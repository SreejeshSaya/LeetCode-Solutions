class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s(0), total(0), tank(0);
        int n(gas.size());
        for(int i=0; i<n; ++i) {
            tank += gas[i] - cost[i];
            if(tank < 0) {
                s=i+1;
                total += tank;
                tank = 0;
            }
        }
        return (total+tank >= 0)? s: -1;
    }
};