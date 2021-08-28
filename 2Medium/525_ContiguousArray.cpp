class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLen=0;
        int cnt=0;
        map<int, int> cMap;
        cMap[0] = -1;
        
        for(int i=0; i<nums.size(); ++i) {
            cnt += (nums[i] == 1)? 1 : -1;
            if(cMap.find(cnt) != cMap.end()) {
                maxLen = max(maxLen, i-cMap[cnt]);
            }
            else cMap[cnt] = i;
        }
        
        return maxLen;
    }
};