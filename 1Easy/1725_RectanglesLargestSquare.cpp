class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int mLen = 0;
        for(vector<int> r: rectangles) {
            mLen = max(mLen, min(r[0], r[1]));
        }
        
        int cnt=0;
        for(vector<int> r: rectangles) {
            if(min(r[0], r[1]) == mLen) ++cnt;
        }
        
        return cnt;
    }
};