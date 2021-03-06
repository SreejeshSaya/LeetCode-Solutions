class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n2(nums2.begin(), nums2.end());
        unordered_set<int> n1(nums1.begin(), nums1.end());
        vector<int> i;
        for(int x : n1) {
            if(n2.count(x))
                i.push_back(x);
        }
        return i;
    }
};