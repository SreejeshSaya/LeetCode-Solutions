class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        int n = nums.size();
        for(int j=0; j<n; ++j) {
            string s = to_string(nums[j]);
            int i=j;
            while(i<(n-1) && nums[i+1]==(nums[i]+1)) ++i;
            if(i!=j)
                s+="->" + to_string(nums[i]);
            ranges.push_back(s);
            j=i;
        }
        return ranges;
    }
};