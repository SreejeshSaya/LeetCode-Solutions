class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies=0;
        for(int c: candies) maxCandies = max(maxCandies, c);
        
        int n=candies.size();
        vector<bool> gCandies(n, false);
        for(int i=0; i<n; ++i) { if((candies[i]+extraCandies) >= maxCandies) gCandies[i] = true; }
        
        return gCandies;
    }
};