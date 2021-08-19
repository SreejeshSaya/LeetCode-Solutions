class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0, r=n-1;
        while(l<r) {
            int m=(r-l)/2+l;
            if(arr[m]>arr[m+1]) r=m;
            else l=m+1;
        }
        return r;
    }
};