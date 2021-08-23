class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int start=0, end=piles.size()-2;
        int mc=0;
        while(start<end) {
            mc += piles[end];
            end -= 2;
            ++start;
        }
        return mc;
    }
};