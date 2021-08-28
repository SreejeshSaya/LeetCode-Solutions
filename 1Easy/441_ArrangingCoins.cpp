class Solution {
public:
    int arrangeCoins(int n) {
        long l=1, r=n;
        long m;
        while(l<=r) {
            m = (r-l)/2+l;
            // cout << m << endl;
            long sum = (m*(m+1))/2;
            if(sum>n) r=m-1;
            else {
                if(sum==n) return m;
                else l=m+1;
            }
        }
        return r;
        
    }
};