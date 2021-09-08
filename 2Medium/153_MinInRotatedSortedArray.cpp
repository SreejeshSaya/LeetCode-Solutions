class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0, r=arr.size()-1;
        while(l<r) {
            int m=(l+r)/2;
            if(arr[m] < arr[r]) r = m;
            else l=m+1;
        }
        return arr[l];
    }
};