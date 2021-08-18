class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing = n;
        for(int i=0; i<n; ++i)
            missing^= i^nums[i];
        return missing;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        long long sum=(n*(n+1))/2;
        //cout<<sum<<endl;
        for(int i=0;i<n;i++){
            //cout<<a[i]<<" ";
            sum-=a[i];
        }
        //cout<<endl;
        return sum;
    }
};