class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        
        vector<int> res(houses.size(), INT_MAX);
        
        // Find heaters on RHS
        for(int ho=0, he=0; ho<houses.size() && he<heaters.size();) {
            if(houses[ho] <= heaters[he]) { 
                res[ho] = heaters[he] - houses[ho];
                ho++;
            }
            else he++;
        }
        
        // Find heaters on LHS
        for(int ho=houses.size()-1, he=heaters.size()-1; ho>=0 && he>=0;) {
            if(houses[ho] >= heaters[he]) {
                res[ho] = min(res[ho], houses[ho] - heaters[he]);
                ho--;
            }
            else he--;
        }
        
        int minRadius=INT_MIN;
        for(int i: res) minRadius = max(minRadius, i);
        
        return minRadius;
    }
};