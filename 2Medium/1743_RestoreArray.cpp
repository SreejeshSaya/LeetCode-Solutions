class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int, vector<int>> m;
        for(vector<int> p: adjacentPairs) {
            m[p[0]].push_back(p[1]);
            m[p[1]].push_back(p[0]);
        }
        
        vector<int> res;
        res.reserve(adjacentPairs.size()+1);
        
        for(pair<int, vector<int>> v: m) {
            if(v.second.size() == 1) {
                res.push_back(v.first);
                res.push_back(v.second[0]);
                break;
            } 
        }
        
        int n=adjacentPairs.size()+1;
        while(res.size() < n) {
            int l = res.back();
            int prev = res[res.size()-2];
            vector<int> &nxt = m[l];
            if(nxt[0] != prev) res.push_back(nxt[0]);
            else res.push_back(nxt[1]);
        }
        
        return res;
    }
};