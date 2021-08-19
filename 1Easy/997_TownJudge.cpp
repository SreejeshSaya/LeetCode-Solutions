class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustsCnt(n+1, 0);
        vector<int> trustedCnt(n+1, 0);
        for(vector<int> t: trust) {
            trustsCnt[t[0]]++;
            trustedCnt[t[1]]++;
        }
        for(int i=1; i<=n; ++i) 
            if(trustedCnt[i]==(n-1) and trustsCnt[i]==0) return i;
        return -1;
        
    }
};