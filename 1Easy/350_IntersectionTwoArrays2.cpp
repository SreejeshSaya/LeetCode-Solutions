class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        vector<int> intersect;
        for(int x: nums1) ++m[x];
        for(int x: nums2) {
            if(m.find(x) != m.end() && --m[x]>=0) intersect.push_back(x);
        }
        
        return intersect;
    }
};