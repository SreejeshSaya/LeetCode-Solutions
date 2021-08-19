class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        
        while(l <= r){
            long long mid = (l+r)/2;
            if(mid*mid <= x && (mid+1)*(mid+1) > x){
                return mid;
            }
            if(mid*mid < x){
                l = mid+1;
            }
            else r = mid - 1;
        }
        return 0;
    }
};