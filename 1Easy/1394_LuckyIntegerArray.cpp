class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> f;
        for(int i: arr) f[i]++;
        
        int ans=-1;
        for(pair<const int, int> it: f) {
            if(it.first == it.second) ans = it.first;
        }
        
        return ans;
    }
};