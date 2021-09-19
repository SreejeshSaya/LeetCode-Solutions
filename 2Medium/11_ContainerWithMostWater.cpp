class Solution {
public:
    int maxArea(vector<int>& height) {
        int h=height.size();
        int mArea = 0;
        for(int l=0, r=h-1; l<r;) {
            mArea = max(mArea, min(height[l], height[r]) * (r-l));
            if(height[l] < height[r]) ++l;
            else --r;
        }
        return mArea;
    }
};