class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int tn, an;
        tn = target.size();
        an = arr.size();
        if(tn != an) return false;
        int cnt[1001] = {0};
        for(int i: arr) ++cnt[i];
        for(int i: target) { --cnt[i]; }
        
        for(int i=1; i<1001; ++i) {
            if(cnt[i]!=0) return false;
        }
        
        return true;
    }
};