class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int contentChildren=0;
        int gSize = g.size();
        int sSize = s.size();

        int gI = 0, sI = 0;
        while(gI<gSize and sI<sSize) {
            if(g[gI]<=s[sI]) {
                ++contentChildren;
                ++gI;                
            }
            ++sI;
        }
        return contentChildren;
    }
};