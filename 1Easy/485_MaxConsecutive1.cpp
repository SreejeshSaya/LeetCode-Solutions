class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int maxCnt=0;
        for(int i: nums) {
            if(i==0) cnt=0;
            else {
                ++cnt;
                maxCnt = max(maxCnt, cnt);
            }
        }
        return maxCnt;
    }
};