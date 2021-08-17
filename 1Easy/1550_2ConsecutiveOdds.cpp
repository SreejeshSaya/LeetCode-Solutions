class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        int oddCnt=0;
        for(int i: arr) {
            if(i&1) ++oddCnt;
            else oddCnt=0;
            if(oddCnt==3) return true;
        }
        return false;
    }
};