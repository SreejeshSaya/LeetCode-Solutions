class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        set<int> noRainDays;
        map<int, int> fullLakes;
        vector<int> ans(rains.size(), -1);
        
        for(int i=0; i<rains.size(); ++i) {
            int l = rains[i];
            if(l==0) { 
                ans[i] = 1;
                noRainDays.insert(i);
            } else {
                if(fullLakes.find(l) != fullLakes.end()) {
                    set<int>::iterator dryLakeDay = noRainDays.lower_bound(fullLakes[l]);
                    if(dryLakeDay == noRainDays.end()) return {};
                    
                    ans[*dryLakeDay] = l;
                    noRainDays.erase(*dryLakeDay);
                    fullLakes.erase(l);
                }
                fullLakes[l] = i;
            }
            
        }
        return ans;
    }
};