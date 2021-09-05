class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int lStreak=0;
        
        for(int i: numSet) {
            if(numSet.find(i-1) == numSet.end()) {
                int curr = i;
                int currStreak = 1;
                while(numSet.find(curr+1) != numSet.end()) {
                    ++curr;
                    ++currStreak;
                }
                lStreak = max(lStreak, currStreak);
            }
        }
        return lStreak;
    }
};