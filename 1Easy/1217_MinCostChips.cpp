class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int eCnt=0, oCnt=0;
        for(int p: position) {
            if(p&1)
                ++oCnt;
            else ++eCnt;
        }
        return min(oCnt, eCnt);
    }
};