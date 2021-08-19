class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candies;
        for(int c: candyType) { candies.insert(c); }
        int un=candies.size();
        int n=candyType.size();
        return min(un, n/2);
    }
};